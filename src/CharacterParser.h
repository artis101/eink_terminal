#pragma once
#include <Arduino.h>

class Terminal; // Forward declaration

enum ParserState
{
    STATE_NORMAL,
    STATE_ESCAPE,
    STATE_CSI
};

class CharacterParser
{
private:
    ParserState state;
    String parameterBuffer;
    String lineBuffer;
    Terminal *terminal;

    void handleCSI(char c);
    void flushBuffer();

public:
    CharacterParser(Terminal *term);
    void processChar(char c);
};