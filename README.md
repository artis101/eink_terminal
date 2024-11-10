# LilyGO T5 Terminal Emulator

A terminal emulator implementation for the LilyGO T5 E-Paper display module, providing a classic terminal interface on an energy-efficient E-ink screen.

![ESP32 with an eink display showing terminal output](https://raw.githubusercontent.com/artis101/eink_terminal/refs/heads/main/photo.png "ESP32 with an eink display showing terminal output")

## Features

- **Terminal Functionality**:
  - Basic text display and input handling
  - ANSI escape sequence support for:
    - Cursor movement and positioning
    - Screen and line clearing
    - Simple text attributes
  - Automatic screen scrolling
  - Serial input processing

- **Display**:
  - Grayscale rendering with 16 levels
  - Custom border and margin settings
  - Power-saving display management
  - Configurable font with monospace support

## Hardware Requirements

- LilyGO T5 E-Paper module [(link to seller)](https://www.lilygo.cc/products/t5-4-7-inch-e-paper-v2-3)
- Serial connection for input

## Basic Usage

```cpp
#include "Terminal.h"

Terminal terminal;

void setup() {
    terminal.init();
}

void loop() {
    terminal.handleInput();
}
```

## Configuration

Terminal appearance can be adjusted in `TerminalConfig.h`:
```cpp
static const int LINE_HEIGHT = 20;
static const int BORDER_WIDTH = 8;
static const int PADDING = 4;
```

## Serial Communication

The terminal receives input via serial at 115200 baud. Connect to the device using any serial terminal to send commands and text.

## Building

Built using the Arduino IDE or PlatformIO. Requires the ESP32 board package.