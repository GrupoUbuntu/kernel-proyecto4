#ifndef KERNEL_H
#define KERNEL_H

#define VGA_ADDRESS 0xB8000

typedef unsigned char UINT8;
typedef unsigned short UINT16;

#define NULL 0


int DIGIT_ASCII_CODES[10] = {0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39};


unsigned int VGA_INDEX;

#define BUFSIZE 2200


UINT16* TERMINAL_BUFFER;

enum vga_color {
    VGA_COLOR_BLACK,
    VGA_COLOR_BLUE,
    VGA_COLOR_GREEN,
    VGA_COLOR_CYAN,
    VGA_COLOR_RED,
    VGA_COLOR_MAGENTA,
    VGA_COLOR_BROWN,
    VGA_COLOR_LIGHT_GREY,
    VGA_COLOR_DARK_GREY,
    VGA_COLOR_LIGHT_BLUE,
    VGA_COLOR_LIGHT_GREEN,
    VGA_COLOR_LIGHT_CYAN,
    VGA_COLOR_LIGHT_RED,
    VGA_COLOR_LIGHT_MAGENTA,
    VGA_COLOR_YELLOW,
    VGA_COLOR_WHITE,
};


#endif
