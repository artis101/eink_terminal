#include "CharacterParser.h"
#include "Terminal.h"

CharacterParser::CharacterParser(Terminal *term)
    : state(STATE_NORMAL), parameterBuffer(""), lineBuffer(""), terminal(term)
{
}

void CharacterParser::flushBuffer()
{
    if (lineBuffer.length() > 0)
    {
        terminal->writeLine(lineBuffer.c_str());
        lineBuffer = "";
    }
}

void CharacterParser::handleCSI(char c)
{
    if (isdigit(c) || c == ';')
    {
        parameterBuffer += c;
        return;
    }

    // Parse parameters
    int params[2] = {1, 1}; // Default values
    int paramCount = 0;

    if (!parameterBuffer.isEmpty())
    {
        char *str = (char *)parameterBuffer.c_str();
        char *token = strtok(str, ";");
        while (token != NULL && paramCount < 2)
        {
            params[paramCount++] = atoi(token);
            token = strtok(NULL, ";");
        }
    }

    switch (c)
    {
    case 'H': // Cursor Home
        if (paramCount == 2)
        {
            terminal->setCurrentLine(max(0, params[0] - 1));
        }
        else
        {
            terminal->setCurrentLine(0);
            terminal->clearScreen();
        }
        break;

    case 'J': // Erase in Display
        if (parameterBuffer.isEmpty() || parameterBuffer == "2")
        {
            terminal->clearScreen();
        }
        break;

    case 'A': // Cursor Up
        terminal->setCurrentLine(max(0, terminal->getCurrentLine() - params[0]));
        break;

    case 'B': // Cursor Down
        terminal->setCurrentLine(min(
            terminal->getConfig().rows - 1,
            terminal->getCurrentLine() + params[0]));
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
            // Ignore CR
        }
        else if (c == '\n')
        {
            flushBuffer();
            terminal->writeLine("");
        }
        else
        {
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