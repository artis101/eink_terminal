#pragma once
#include "EinkDisplay.h"
#include "CharacterParser.h"
#include "TerminalConfig.h"
#include "ComicCode.h"

class Terminal
{
private:
    EinkDisplay display;
    CharacterParser parser;
    TerminalConfig config;
    int currentLine;
    FontProperties fontProps;
    void calculateDimensions();
    void scrollScreen();

public:
    Terminal();
    void init();
    void writeLine(const char *text);
    void clearScreen();
    void handleInput();
    int getCurrentLine() const { return currentLine; }
    void setCurrentLine(int line) { currentLine = line; }
    const TerminalConfig &getConfig() const { return config; }
};
