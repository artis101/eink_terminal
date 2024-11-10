#include "EinkDisplay.h"

EinkDisplay::EinkDisplay() : framebuffer(nullptr), needsPower(true) {}

EinkDisplay::~EinkDisplay()
{
    if (framebuffer)
    {
        free(framebuffer);
    }
}

void EinkDisplay::initFramebuffer()
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
}

void EinkDisplay::init()
{
    initFramebuffer();
    epd_init();
    powerOn();
    clear();
}

void EinkDisplay::clear()
{
    memset(framebuffer, 0xFF, EPD_WIDTH * EPD_HEIGHT / 2);
    epd_clear();
}

void EinkDisplay::powerOn()
{
    epd_poweron();
    needsPower = false;
}

void EinkDisplay::powerOff()
{
    epd_poweroff();
    needsPower = true;
}

void EinkDisplay::drawBorder(int borderWidth)
{
    int term_x = borderWidth / 2;
    int term_y = borderWidth / 2;
    int term_width = EPD_WIDTH - borderWidth;
    int term_height = EPD_HEIGHT - borderWidth;
    epd_draw_rect(term_x, term_y, term_width, term_height, 0, framebuffer);
}

void EinkDisplay::drawGrayscaleImage()
{
    epd_draw_grayscale_image(epd_full_screen(), framebuffer);
}
