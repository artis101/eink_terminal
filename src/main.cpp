#include "Terminal.h"

Terminal terminal;

void setup()
{
    terminal.init();
}

void loop()
{
    terminal.handleInput();
}