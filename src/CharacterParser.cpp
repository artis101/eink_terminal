#include "CharacterParser.h"
#include "Terminal.h"

CharacterParser::CharacterParser(Terminal *term)
    : state(STATE_NORMAL), parameterBuffer(""), lineBuffer(""), terminal(term), currentAttributes(ATTR_NORMAL), savedCursorRow(0), savedCursorCol(0)
{
}

void CharacterParser::flushBuffer()
{
    if (lineBuffer.length() > 0)
    {
        terminal->writeLine(lineBuffer.c_str(), currentAttributes);
        lineBuffer = "";
    }
}

void CharacterParser::parseTextAttributes(const int *params, int count)
{
    for (int i = 0; i < count; i++)
    {
        switch (params[i])
        {
        case 0: // Reset
            currentAttributes = ATTR_NORMAL;
            break;
        case 1: // Bold
            currentAttributes |= ATTR_BOLD;
            break;
        case 2: // Dim
            currentAttributes |= ATTR_DIM;
            break;
        case 4: // Underline
            currentAttributes |= ATTR_UNDERLINE;
            break;
        case 7: // Reverse
            currentAttributes |= ATTR_REVERSE;
            break;
        case 22: // Normal intensity
            currentAttributes &= ~(ATTR_BOLD | ATTR_DIM);
            break;
        case 24: // Not underlined
            currentAttributes &= ~ATTR_UNDERLINE;
            break;
        case 27: // Not reversed
            currentAttributes &= ~ATTR_REVERSE;
            break;
        }
    }
}

void CharacterParser::clearLine(int mode)
{
    // mode: 0=cursor to end, 1=start to cursor, 2=entire line
    terminal->clearLine(mode);
}

void CharacterParser::saveCursorPosition()
{
    savedCursorRow = terminal->getCurrentLine(); // Changed from getCurrentRow
    savedCursorCol = terminal->getCurrentCol();
}

void CharacterParser::restoreCursorPosition()
{
    terminal->setCursor(savedCursorRow, savedCursorCol);
}

void CharacterParser::handleCSI(char c)
{
    if (isdigit(c) || c == ';')
    {
        parameterBuffer += c;
        return;
    }

    // Parse parameters
    int params[4] = {0}; // Increased to support more parameters
    int paramCount = 0;

    if (!parameterBuffer.isEmpty())
    {
        char *str = (char *)parameterBuffer.c_str();
        char *token = strtok(str, ";");
        while (token != NULL && paramCount < 4)
        {
            params[paramCount++] = atoi(token);
            token = strtok(NULL, ";");
        }
    }

    switch (c)
    {
    case 'H': // Cursor Home
    case 'f': // Force Cursor Position
        if (paramCount == 2)
        {
            terminal->setCursor(max(0, params[0] - 1), max(0, params[1] - 1));
        }
        else
        {
            terminal->setCursor(0, 0);
        }
        break;

    case 'J': // Erase in Display
        switch (params[0])
        {
        case 0: // Clear from cursor to end
            terminal->clearToEndOfScreen();
            break;
        case 1: // Clear from start to cursor
            terminal->clearToStartOfScreen();
            break;
        case 2: // Clear entire screen
            terminal->clearScreen();
            break;
        }
        break;

    case 'K': // Erase in Line
        clearLine(params[0]);
        break;

    case 'A': // Cursor Up
        terminal->moveCursorUp(params[0] ? params[0] : 1);
        break;

    case 'B': // Cursor Down
        terminal->moveCursorDown(params[0] ? params[0] : 1);
        break;

    case 'C': // Cursor Forward
        terminal->moveCursorForward(params[0] ? params[0] : 1);
        break;

    case 'D': // Cursor Back
        terminal->moveCursorBack(params[0] ? params[0] : 1);
        break;

    case 'm': // Set Graphics Mode
        parseTextAttributes(params, paramCount);
        break;

    case 's': // Save Cursor Position
        saveCursorPosition();
        break;

    case 'u': // Restore Cursor Position
        restoreCursorPosition();
        break;
    }

    state = STATE_NORMAL;
    parameterBuffer = "";
}

void CharacterParser::processChar(char c)
{
    switch (state)
    {
    case STATE_NORMAL:
        if (c == '\033')
        {
            flushBuffer();
            state = STATE_ESCAPE;
        }
        else if (c == '\r')
        {
            // Carriage return - move to start of line
            flushBuffer();
            terminal->setCursor(terminal->getCurrentLine(), 0); // Changed from getCurrentRow
        }
        else if (c == '\n')
        {
            // Line feed - move to next line
            flushBuffer();
            terminal->moveCursorDown(1);
            terminal->setCursor(terminal->getCurrentLine(), 0); // Changed from getCurrentRow
        }
        else if (c == '\b')
        {
            // Backspace
            if (lineBuffer.length() > 0)
            {
                lineBuffer.remove(lineBuffer.length() - 1);
            }
        }
        else if (c == '\t')
        {
            // Tab - add spaces to next tab stop (usually 8 spaces)
            int spaces = 8 - (lineBuffer.length() % 8);
            for (int i = 0; i < spaces; i++)
            {
                lineBuffer += ' ';
            }
        }
        else if (c >= 32)
        { // Printable characters
            lineBuffer += c;
            if (lineBuffer.length() >= terminal->getConfig().cols)
            {
                flushBuffer();
            }
        }
        break;

    case STATE_ESCAPE:
        if (c == '[')
        {
            state = STATE_CSI;
            parameterBuffer = "";
        }
        else if (c == '7')
        {
            saveCursorPosition();
            state = STATE_NORMAL;
        }
        else if (c == '8')
        {
            restoreCursorPosition();
            state = STATE_NORMAL;
        }
        else
        {
            state = STATE_NORMAL;
        }
        break;

    case STATE_CSI:
        handleCSI(c);
        break;
    }
}