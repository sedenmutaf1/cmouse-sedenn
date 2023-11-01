# Mouse Input Reader

## Introduction

Mouse Input Reader is a C program that reads mouse input events from a specified device file and displays the relative position of the mouse since the program started on the terminal. This program can be useful for monitoring mouse input in a Linux environment.

## Usage

To use Mouse Input Reader, follow these steps:

1. Compile the program using a C compiler (e.g., GCC):gcc -o mouse_reader main.c
2. Run the compiled program, providing the correct mouse device file as a command-line argument. Replace `<device_path>` with the actual device file path:./mouse_reader <device_path>
3. The program will continuously display the relative mouse position as you move the mouse. To exit the program, press `Ctrl+C`.

## Safety Concerns

- **Device Permissions:** To read from the input device file, the program may require superuser privileges or appropriate permissions. Running the program with elevated privileges (e.g., using `sudo`) may be necessary if you encounter a "Permission denied" error.

- **Infinite Loop:** The program runs in an infinite loop, continuously reading and displaying mouse input. To exit the program, use `Ctrl+C` to send an interrupt signal.

- **System Compatibility:** The effectiveness of the program may vary depending on the terminal emulator and system configuration. Some terminal emulators may not fully support control characters, potentially affecting the display of the relative mouse position.


