#include <pgmspace.h>

const uint16_t hyphenWidth = 7;
const uint16_t hyphenHeight = 6;

const unsigned short hyphen[42] PROGMEM = {
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,// row 0, 7 pixels
0x39E7,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x5AEB,// row 1, 14 pixels
0x7BEF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xBDF7,// row 2, 21 pixels
0x7BEF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xBDF7,// row 3, 28 pixels
0x5AEB,0xBDF7,0xBDF7,0xBDF7,0xBDF7,0xBDF7,0x8C71,// row 4, 35 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,// row 5, 42 pixels
};
