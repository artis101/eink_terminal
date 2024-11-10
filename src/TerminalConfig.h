#pragma once

struct TerminalConfig
{
    static const int LINE_HEIGHT = 20;
    static const int BORDER_WIDTH = 20;
    static const int PADDING = 5;
    static const int MARGIN_LEFT = BORDER_WIDTH + PADDING;
    static const int MARGIN_RIGHT = BORDER_WIDTH + PADDING;
    static const int MARGIN_TOP = BORDER_WIDTH + PADDING * 2;
    static const int MARGIN_BOTTOM = BORDER_WIDTH + PADDING * 2;

    int rows;
    int cols;

    TerminalConfig() : rows(0), cols(0) {}
};
