#include "Terminal.h"

Terminal::Terminal()
    : currentLine(0), parser(this)
{
    fontProps = {
        .fg_color = 0,
        .bg_color = 15,
        .fallback_glyph = 0x3F,
        .flags = DRAW_BACKGROUND};
}

void Terminal::calculateDimensions()
{
    int usable_height = EPD_HEIGHT - (config.MARGIN_TOP + config.MARGIN_BOTTOM);
    config.rows = usable_height / config.LINE_HEIGHT;

    int32_t cursor_x = 0;
    int32_t cursor_y = 0;
    int32_t x1 = 0, y1 = 0, w = 0, h = 0;

    get_text_bounds((GFXfont *)&ComicCode, "M", &cursor_x, &cursor_y,
                    &x1, &y1, &w, &h, &fontProps);

    int char_width = w + 1;
    int usable_width = EPD_WIDTH - (config.MARGIN_LEFT + config.MARGIN_RIGHT);
    config.cols = usable_width / char_width;

    Serial.printf("Terminal size: %d columns x %d rows\n", config.cols, config.rows);
}

void Terminal::init()
{
    Serial.begin(115200);
    delay(1000);

    Serial.println("\nInitializing E-Paper Terminal...");

    display.init();
    calculateDimensions();
    clearScreen();

    Serial.println("Terminal ready!");
    writeLine("> ");

    display.powerOff();
}

void Terminal::clearScreen()
{
    display.clear();
    currentLine = 0;
    display.drawBorder(config.BORDER_WIDTH);
}

void Terminal::scrollScreen()
{
    uint8_t *framebuffer = display.getFramebuffer();
    uint8_t *tempBuffer = (uint8_t *)ps_calloc(sizeof(uint8_t), EPD_WIDTH * EPD_HEIGHT / 2);

    if (!tempBuffer)
    {
        Serial.println("Scroll memory allocation failed!");
        return;
    }

    memcpy(tempBuffer, framebuffer, EPD_WIDTH * EPD_HEIGHT / 2);
    memset(framebuffer, 0xFF, EPD_WIDTH * EPD_HEIGHT / 2);

    for (int y = config.LINE_HEIGHT; y < EPD_HEIGHT - config.MARGIN_BOTTOM; y++)
    {
        for (int x = 0; x < EPD_WIDTH / 2; x++)
        {
            framebuffer[x + ((y - config.LINE_HEIGHT) * (EPD_WIDTH / 2))] =
                tempBuffer[x + (y * (EPD_WIDTH / 2))];
        }
    }

    free(tempBuffer);
    display.drawBorder(config.BORDER_WIDTH);
    display.drawGrayscaleImage();
    currentLine--;
}

void Terminal::writeLine(const char *text)
{
    if (currentLine >= config.rows)
    {
        scrollScreen();
    }

    int32_t cursor_x = config.PADDING;
    int32_t x1 = 0, y1 = 0, w = 0, h = 0;
    get_text_bounds((GFXfont *)&ComicCode, "Mg", &cursor_x, &y1,
                    &x1, &y1, &w, &h, &fontProps);

    int32_t cursor_y = (config.PADDING * 2) + (currentLine * config.LINE_HEIGHT) +
                       (config.LINE_HEIGHT / 2) + (h / 2);

    write_mode((GFXfont *)&ComicCode, text, &cursor_x, &cursor_y,
               display.getFramebuffer(), WHITE_ON_BLACK, &fontProps);

    display.drawGrayscaleImage();
    currentLine++;
}

void Terminal::handleInput()
{
    if (Serial.available())
    {
        if (!display.isPowered())
        {
            display.powerOn();
        }

        while (Serial.available())
        {
            char c = Serial.read();
            parser.processChar(c);
        }

        display.powerOff();
    }
}