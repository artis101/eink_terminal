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
    int currentCol;
    FontProperties fontProps;
    void calculateDimensions();
    void scrollScreen();
    bool checkBounds(int row, int col) const;

public:
    Terminal();
    void init();
    void writeLine(const char *text, uint8_t attributes = 0);
    void clearScreen();
    void clearToEndOfScreen();
    void clearToStartOfScreen();
    void clearLine(int mode);
    void handleInput();

    // Cursor management
    int getCurrentLine() const { return currentLine; }
    int getCurrentCol() const { return currentCol; }
    void setCurrentLine(int line) { currentLine = line; }
    void setCursor(int row, int col);
    void moveCursorUp(int count);
    void moveCursorDown(int count);
    void moveCursorForward(int count);
    void moveCursorBack(int count);

    const TerminalConfig &getConfig() const { return config; }
};