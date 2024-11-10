#pragma once
#include <Arduino.h>
#include "epd_driver.h"
#include "utilities.h"

class EinkDisplay
{
private:
    uint8_t *framebuffer;
    bool needsPower;

    void initFramebuffer();

public:
    EinkDisplay();
    ~EinkDisplay();

    void init();
    void clear();
    void powerOn();
    void powerOff();
    bool isPowered() const { return !needsPower; }
    void drawBorder(int borderWidth);
    void drawGrayscaleImage();
    uint8_t *getFramebuffer() { return framebuffer; }
};