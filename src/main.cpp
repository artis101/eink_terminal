#ifndef BOARD_HAS_PSRAM
#error "Please enable PSRAM, Arduino IDE -> tools -> PSRAM -> OPI !!!"
#endif

#include <Arduino.h>
#include "epd_driver.h"
#include "utilities.h"
#include "ComicCode.h"

// Configuration constants
const int LINE_HEIGHT = 20;
const int BORDER_WIDTH = 20;
const int PADDING = 5;
const int MARGIN_LEFT = BORDER_WIDTH + PADDING;
const int MARGIN_RIGHT = BORDER_WIDTH + PADDING;
const int MARGIN_TOP = BORDER_WIDTH + PADDING * 2;
const int MARGIN_BOTTOM = BORDER_WIDTH + PADDING * 2;

int TERM_ROWS = 0;
int TERM_COLS = 0;

uint8_t *framebuffer = NULL;
int currentLine = 0;
bool displayNeedsPower = true;

FontProperties props = {
    .fg_color = 0,
    .bg_color = 15,
    .fallback_glyph = 0x3F,
    .flags = DRAW_BACKGROUND};

void drawBorder()
{
    int term_x = BORDER_WIDTH / 2;
    int term_y = BORDER_WIDTH / 2;
    int term_width = EPD_WIDTH - BORDER_WIDTH;
    int term_height = EPD_HEIGHT - BORDER_WIDTH;
    epd_draw_rect(term_x, term_y, term_width, term_height, 0, framebuffer);
}

void calculateTerminalDimensions()
{
    int usable_height = EPD_HEIGHT - (MARGIN_TOP + MARGIN_BOTTOM);
    TERM_ROWS = usable_height / LINE_HEIGHT;

    int32_t cursor_x = 0;
    int32_t cursor_y = 0;
    int32_t x1 = 0, y1 = 0, w = 0, h = 0;

    get_text_bounds((GFXfont *)&ComicCode, "M", &cursor_x, &cursor_y,
                    &x1, &y1, &w, &h, &props);

    int char_width = w + 1;
    int usable_width = EPD_WIDTH - (MARGIN_LEFT + MARGIN_RIGHT);
    TERM_COLS = usable_width / char_width;

    Serial.println("\nE-Paper Terminal Debug Info:");
    Serial.println("----------------------------");
    Serial.printf("Display dimensions: %dx%d pixels\n", EPD_WIDTH, EPD_HEIGHT);
    Serial.printf("Character size: %dx%d pixels\n", char_width, h);
    Serial.printf("Line height: %d pixels\n", LINE_HEIGHT);
    Serial.printf("Usable area: %dx%d pixels (with margins)\n", usable_width, usable_height);
    Serial.printf("Terminal size: %d columns x %d rows\n", TERM_COLS, TERM_ROWS);
    Serial.println("----------------------------\n");
}

void initializeDisplay()
{
    framebuffer = (uint8_t *)ps_calloc(sizeof(uint8_t), EPD_WIDTH * EPD_HEIGHT / 2);
    if (!framebuffer)
    {
        Serial.println("Memory allocation failed!");
        while (1)
        {
            delay(1000);
        }
    }
    memset(framebuffer, 0xFF, EPD_WIDTH * EPD_HEIGHT / 2);
    epd_init();
    epd_poweron();
    epd_clear();
}

void clearScreen()
{
    memset(framebuffer, 0xFF, EPD_WIDTH * EPD_HEIGHT / 2);
    epd_draw_grayscale_image(epd_full_screen(), framebuffer);
    epd_clear();
    currentLine = 0;
    drawBorder();
}

void scrollScreen()
{
    uint8_t *tempBuffer = (uint8_t *)ps_calloc(sizeof(uint8_t), EPD_WIDTH * EPD_HEIGHT / 2);
    if (!tempBuffer)
    {
        Serial.println("Scroll memory allocation failed!");
        return;
    }

    memcpy(tempBuffer, framebuffer, EPD_WIDTH * EPD_HEIGHT / 2);
    memset(framebuffer, 0xFF, EPD_WIDTH * EPD_HEIGHT / 2);

    int scrollPixels = LINE_HEIGHT;

    for (int y = scrollPixels; y < EPD_HEIGHT - MARGIN_BOTTOM; y++)
    {
        for (int x = 0; x < EPD_WIDTH / 2; x++)
        {
            framebuffer[x + ((y - scrollPixels) * (EPD_WIDTH / 2))] =
                tempBuffer[x + (y * (EPD_WIDTH / 2))];
        }
    }

    free(tempBuffer);
    drawBorder();
    epd_draw_grayscale_image(epd_full_screen(), framebuffer);
    currentLine--;
}

void writeLine(const char *text)
{
    if (currentLine >= TERM_ROWS)
    {
        scrollScreen();
    }

    int32_t cursor_x = PADDING;
    int32_t x1 = 0, y1 = 0, w = 0, h = 0;
    get_text_bounds((GFXfont *)&ComicCode, "Mg", &cursor_x, &y1,
                    &x1, &y1, &w, &h, &props);

    int32_t cursor_y = (PADDING * 2) + (currentLine * LINE_HEIGHT) + (LINE_HEIGHT / 2) + (h / 2);

    write_mode((GFXfont *)&ComicCode, text, &cursor_x, &cursor_y,
               framebuffer, WHITE_ON_BLACK, &props);

    epd_draw_grayscale_image(epd_full_screen(), framebuffer);
    currentLine++;
}

void setup()
{
    Serial.begin(115200);
    delay(1000);

    Serial.println("\nInitializing E-Paper Terminal...");

    initializeDisplay();
    calculateTerminalDimensions();
    clearScreen();

    Serial.println("Terminal ready!");
    Serial.println("Send text via Serial to display on the e-paper screen.");
    writeLine("> ");

    epd_poweroff();
    displayNeedsPower = true;
}

void loop()
{
    if (Serial.available())
    {
        if (displayNeedsPower)
        {
            epd_poweron();
            displayNeedsPower = false;
        }

        String line = Serial.readStringUntil('\n');
        writeLine(line.c_str());

        epd_poweroff();
        displayNeedsPower = true;
    }
}