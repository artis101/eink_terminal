#pragma once
#include <Arduino.h>

class Terminal;

enum ParserState
{
    STATE_NORMAL,
    STATE_ESCAPE,
    STATE_CSI
};

enum TextAttribute
{
    ATTR_NORMAL = 0,
    ATTR_BOLD = 1,
    ATTR_DIM = 2,
    ATTR_UNDERLINE = 4,
    ATTR_REVERSE = 7
};

class CharacterParser
{
private:
    ParserState state;
    String parameterBuffer;
    String lineBuffer;
    Terminal *terminal;
    uint8_t currentAttributes;
    int savedCursorRow;
    int savedCursorCol;

    void handleCSI(char c);
    void flushBuffer();
    void parseTextAttributes(const int *params, int count);
    void saveCursorPosition();
    void restoreCursorPosition();
    void clearLine(int mode);

public:
    CharacterParser(Terminal *term);
    void processChar(char c);
    uint8_t getAttributes() const { return currentAttributes; }
};