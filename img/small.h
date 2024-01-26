#include <pgmspace.h>

const uint16_t smallWidth = 10;
const uint16_t smallHeight = 15;

const unsigned short small0[150] PROGMEM = {
0x0000,0x0000,0x0861,0x8C71,0xBDF7,0xBDF7,0x6B6D,0x0000,0x0000,0x0000,// row 0, 10 pixels
0x0000,0x18E3,0xEF7D,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xCE79,0x0000,0x0000,// row 1, 20 pixels
0x0000,0xAD75,0xFFFF,0xFFFF,0x8C71,0xAD75,0xFFFF,0xFFFF,0x6B6D,0x0000,// row 2, 30 pixels
0x0861,0xFFFF,0xFFFF,0x9CF3,0x0000,0x0000,0xDEFB,0xFFFF,0xCE79,0x0000,// row 3, 40 pixels
0x39E7,0xFFFF,0xFFFF,0x5AEB,0x0000,0x0000,0x9CF3,0xFFFF,0xFFFF,0x0000,// row 4, 50 pixels
0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 5, 60 pixels
0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 6, 70 pixels
0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 7, 80 pixels
0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 8, 90 pixels
0x5AEB,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x18E3,// row 9, 100 pixels
0x39E7,0xFFFF,0xFFFF,0x7BEF,0x0000,0x0000,0xBDF7,0xFFFF,0xEF7D,0x0000,// row 10, 110 pixels
0x0000,0xEF7D,0xFFFF,0xDEFB,0x0861,0x2965,0xFFFF,0xFFFF,0x9CF3,0x0000,// row 11, 120 pixels
0x0000,0x6B6D,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x18E3,0x0000,// row 12, 130 pixels
0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x4A69,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0861,0x39E7,0x39E7,0x0000,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small1[150] PROGMEM = {
0x0000,0x0000,0x0000,0x0000,0x0861,0xBDF7,0xBDF7,0x2965,0x0000,0x0000,// row 0, 10 pixels
0x0000,0x0000,0x0000,0x0000,0x9CF3,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 1, 20 pixels
0x0000,0x0000,0x0000,0x9CF3,0xFFFF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 2, 30 pixels
0x0000,0x4A69,0xDEFB,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 3, 40 pixels
0x0000,0xBDF7,0xFFFF,0xEF7D,0xAD75,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 4, 50 pixels
0x0000,0xBDF7,0xDEFB,0x2965,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 5, 60 pixels
0x0000,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 6, 70 pixels
0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 7, 80 pixels
0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 8, 90 pixels
0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 9, 100 pixels
0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 10, 110 pixels
0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 11, 120 pixels
0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 12, 130 pixels
0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small2[150] PROGMEM = {
0x0000,0x0000,0x18E3,0x7BEF,0xBDF7,0xBDF7,0x8C71,0x18E3,0x0000,0x0000,// row 0, 10 pixels
0x0000,0x2965,0xEF7D,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x5AEB,0x0000,// row 1, 20 pixels
0x0000,0xDEFB,0xFFFF,0xFFFF,0x9CF3,0x8C71,0xFFFF,0xFFFF,0xEF7D,0x0000,// row 2, 30 pixels
0x18E3,0xFFFF,0xFFFF,0xAD75,0x0000,0x0000,0x9CF3,0xFFFF,0xFFFF,0x39E7,// row 3, 40 pixels
0x0861,0x39E7,0x7BEF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 4, 50 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xCE79,0xFFFF,0xEF7D,0x0000,// row 5, 60 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x6B6D,0xFFFF,0xFFFF,0x7BEF,0x0000,// row 6, 70 pixels
0x0000,0x0000,0x0000,0x0000,0x5AEB,0xFFFF,0xFFFF,0xCE79,0x0861,0x0000,// row 7, 80 pixels
0x0000,0x0000,0x0000,0x5AEB,0xFFFF,0xFFFF,0xCE79,0x0861,0x0000,0x0000,// row 8, 90 pixels
0x0000,0x0000,0x4A69,0xFFFF,0xFFFF,0xCE79,0x0861,0x0000,0x0000,0x0000,// row 9, 100 pixels
0x0000,0x18E3,0xEF7D,0xFFFF,0xCE79,0x0861,0x0000,0x0000,0x0000,0x0000,// row 10, 110 pixels
0x0000,0xBDF7,0xFFFF,0xFFFF,0xDEFB,0xBDF7,0xBDF7,0xBDF7,0xBDF7,0x2965,// row 11, 120 pixels
0x2965,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x39E7,// row 12, 130 pixels
0x6B6D,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x39E7,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small3[150] PROGMEM = {
0x0000,0x0000,0x18E3,0x8C71,0xBDF7,0xBDF7,0x6B6D,0x0000,0x0000,0x0000,// row 0, 10 pixels
0x0000,0x39E7,0xEF7D,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xCE79,0x0000,0x0000,// row 1, 20 pixels
0x0000,0xDEFB,0xFFFF,0xFFFF,0x8C71,0xBDF7,0xFFFF,0xFFFF,0x6B6D,0x0000,// row 2, 30 pixels
0x18E3,0xFFFF,0xFFFF,0x9CF3,0x0000,0x0861,0xFFFF,0xFFFF,0xBDF7,0x0000,// row 3, 40 pixels
0x0000,0x0000,0x0861,0x18E3,0x0000,0x0861,0xFFFF,0xFFFF,0xAD75,0x0000,// row 4, 50 pixels
0x0000,0x0000,0x0000,0x0000,0x2965,0xAD75,0xFFFF,0xFFFF,0x2965,0x0000,// row 5, 60 pixels
0x0000,0x0000,0x0000,0x0000,0xCE79,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,// row 6, 70 pixels
0x0000,0x0000,0x0000,0x0000,0xCE79,0xDEFB,0xFFFF,0xEF7D,0x2965,0x0000,// row 7, 80 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDEFB,0xFFFF,0xEF7D,0x0000,// row 8, 90 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 9, 100 pixels
0x5AEB,0xBDF7,0xEF7D,0x4A69,0x0000,0x0000,0x8C71,0xFFFF,0xFFFF,0x39E7,// row 10, 110 pixels
0x2965,0xFFFF,0xFFFF,0xCE79,0x0861,0x2965,0xEF7D,0xFFFF,0xEF7D,0x0000,// row 11, 120 pixels
0x0000,0xAD75,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x5AEB,0x0000,// row 12, 130 pixels
0x0000,0x0861,0x9CF3,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x5AEB,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0861,0x39E7,0x39E7,0x0000,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small4[150] PROGMEM = {
0x0000,0x0000,0x0000,0x0000,0x0000,0x4A69,0x7BEF,0x7BEF,0x0000,0x0000,// row 0, 10 pixels
0x0000,0x0000,0x0000,0x0000,0x18E3,0xEF7D,0xFFFF,0xFFFF,0x0000,0x0000,// row 1, 20 pixels
0x0000,0x0000,0x0000,0x0000,0xAD75,0xFFFF,0xFFFF,0xFFFF,0x0000,0x0000,// row 2, 30 pixels
0x0000,0x0000,0x0000,0x4A69,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x0000,0x0000,// row 3, 40 pixels
0x0000,0x0000,0x0861,0xEF7D,0xFFFF,0xEF7D,0xFFFF,0xFFFF,0x0000,0x0000,// row 4, 50 pixels
0x0000,0x0000,0xAD75,0xFFFF,0xAD75,0xBDF7,0xFFFF,0xFFFF,0x0000,0x0000,// row 5, 60 pixels
0x0000,0x4A69,0xFFFF,0xEF7D,0x0861,0xBDF7,0xFFFF,0xFFFF,0x0000,0x0000,// row 6, 70 pixels
0x0861,0xEF7D,0xFFFF,0x4A69,0x0000,0xBDF7,0xFFFF,0xFFFF,0x0000,0x0000,// row 7, 80 pixels
0xAD75,0xFFFF,0xAD75,0x0000,0x0000,0xBDF7,0xFFFF,0xFFFF,0x0000,0x0000,// row 8, 90 pixels
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xBDF7,// row 9, 100 pixels
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xBDF7,// row 10, 110 pixels
0x39E7,0x39E7,0x39E7,0x39E7,0x39E7,0xCE79,0xFFFF,0xFFFF,0x39E7,0x2965,// row 11, 120 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0xBDF7,0xFFFF,0xFFFF,0x0000,0x0000,// row 12, 130 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0xBDF7,0xFFFF,0xFFFF,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small5[150] PROGMEM = {
0x0000,0x0000,0x5AEB,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x0000,// row 0, 10 pixels
0x0000,0x0000,0xEF7D,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x0000,// row 1, 20 pixels
0x0000,0x18E3,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x0000,// row 2, 30 pixels
0x0000,0x4A69,0xFFFF,0xFFFF,0x8C71,0x39E7,0x39E7,0x39E7,0x39E7,0x0000,// row 3, 40 pixels
0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x0000,0x0000,0x0000,// row 4, 50 pixels
0x0000,0xBDF7,0xFFFF,0xFFFF,0x7BEF,0xBDF7,0x9CF3,0x39E7,0x0000,0x0000,// row 5, 60 pixels
0x0000,0xEF7D,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x5AEB,0x0000,// row 6, 70 pixels
0x18E3,0xFFFF,0xFFFF,0xEF7D,0x8C71,0x8C71,0xFFFF,0xFFFF,0xEF7D,0x0861,// row 7, 80 pixels
0x0861,0x39E7,0x6B6D,0x2965,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x5AEB,// row 8, 90 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x39E7,0xFFFF,0xFFFF,0x7BEF,// row 9, 100 pixels
0x5AEB,0xCE79,0xDEFB,0x0000,0x0000,0x0000,0x4A69,0xFFFF,0xFFFF,0x6B6D,// row 10, 110 pixels
0x2965,0xFFFF,0xFFFF,0x7BEF,0x0000,0x18E3,0xCE79,0xFFFF,0xFFFF,0x18E3,// row 11, 120 pixels
0x0000,0xAD75,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x8C71,0x0000,// row 12, 130 pixels
0x0000,0x0861,0x8C71,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x7BEF,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0861,0x39E7,0x39E7,0x0000,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small6[150] PROGMEM = {
0x0000,0x0000,0x0000,0x5AEB,0xAD75,0xBDF7,0x8C71,0x18E3,0x0000,0x0000,// row 0, 10 pixels
0x0000,0x0861,0xCE79,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x18E3,0x0000,// row 1, 20 pixels
0x0000,0x7BEF,0xFFFF,0xFFFF,0x8C71,0xAD75,0xFFFF,0xFFFF,0x9CF3,0x0000,// row 2, 30 pixels
0x0000,0xEF7D,0xFFFF,0x8C71,0x0000,0x0000,0xDEFB,0xDEFB,0xBDF7,0x0000,// row 3, 40 pixels
0x39E7,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,// row 4, 50 pixels
0x6B6D,0xFFFF,0xFFFF,0x2965,0x9CF3,0xBDF7,0x8C71,0x18E3,0x0000,0x0000,// row 5, 60 pixels
0x7BEF,0xFFFF,0xFFFF,0xEF7D,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x2965,0x0000,// row 6, 70 pixels
0x7BEF,0xFFFF,0xFFFF,0xEF7D,0x8C71,0xAD75,0xFFFF,0xFFFF,0xBDF7,0x0000,// row 7, 80 pixels
0x7BEF,0xFFFF,0xFFFF,0x7BEF,0x0000,0x0000,0xBDF7,0xFFFF,0xFFFF,0x18E3,// row 8, 90 pixels
0x5AEB,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 9, 100 pixels
0x2965,0xFFFF,0xFFFF,0x5AEB,0x0000,0x0000,0x8C71,0xFFFF,0xFFFF,0x39E7,// row 10, 110 pixels
0x0000,0xDEFB,0xFFFF,0xCE79,0x18E3,0x18E3,0xDEFB,0xFFFF,0xEF7D,0x0000,// row 11, 120 pixels
0x0000,0x4A69,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x7BEF,0x0000,// row 12, 130 pixels
0x0000,0x0000,0x5AEB,0xEF7D,0xFFFF,0xFFFF,0xEF7D,0x7BEF,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0000,0x39E7,0x39E7,0x0861,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small7[150] PROGMEM = {
0x39E7,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x18E3,// row 0, 10 pixels
0x7BEF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x39E7,// row 1, 20 pixels
0x7BEF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x2965,// row 2, 30 pixels
0x18E3,0x39E7,0x39E7,0x39E7,0x39E7,0x4A69,0xEF7D,0xFFFF,0x5AEB,0x0000,// row 3, 40 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0xAD75,0xFFFF,0xAD75,0x0000,0x0000,// row 4, 50 pixels
0x0000,0x0000,0x0000,0x0000,0x4A69,0xFFFF,0xFFFF,0x18E3,0x0000,0x0000,// row 5, 60 pixels
0x0000,0x0000,0x0000,0x0000,0xDEFB,0xFFFF,0x9CF3,0x0000,0x0000,0x0000,// row 6, 70 pixels
0x0000,0x0000,0x0000,0x5AEB,0xFFFF,0xFFFF,0x18E3,0x0000,0x0000,0x0000,// row 7, 80 pixels
0x0000,0x0000,0x0000,0xCE79,0xFFFF,0xCE79,0x0000,0x0000,0x0000,0x0000,// row 8, 90 pixels
0x0000,0x0000,0x2965,0xFFFF,0xFFFF,0x6B6D,0x0000,0x0000,0x0000,0x0000,// row 9, 100 pixels
0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x2965,0x0000,0x0000,0x0000,0x0000,// row 10, 110 pixels
0x0000,0x0000,0xBDF7,0xFFFF,0xFFFF,0x0000,0x0000,0x0000,0x0000,0x0000,// row 11, 120 pixels
0x0000,0x0000,0xDEFB,0xFFFF,0xCE79,0x0000,0x0000,0x0000,0x0000,0x0000,// row 12, 130 pixels
0x0000,0x0000,0xFFFF,0xFFFF,0xBDF7,0x0000,0x0000,0x0000,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small8[150] PROGMEM = {
0x0000,0x0000,0x39E7,0x9CF3,0xBDF7,0xBDF7,0x8C71,0x18E3,0x0000,0x0000,// row 0, 10 pixels
0x0000,0x5AEB,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x2965,0x0000,// row 1, 20 pixels
0x0861,0xEF7D,0xFFFF,0xEF7D,0x4A69,0x6B6D,0xFFFF,0xFFFF,0xBDF7,0x0000,// row 2, 30 pixels
0x39E7,0xFFFF,0xFFFF,0x8C71,0x0000,0x0000,0xCE79,0xFFFF,0xFFFF,0x0000,// row 3, 40 pixels
0x2965,0xFFFF,0xFFFF,0x8C71,0x0000,0x0000,0xCE79,0xFFFF,0xEF7D,0x0000,// row 4, 50 pixels
0x0000,0xBDF7,0xFFFF,0xEF7D,0x4A69,0x6B6D,0xFFFF,0xFFFF,0x5AEB,0x0000,// row 5, 60 pixels
0x0000,0x0000,0x9CF3,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x5AEB,0x0000,0x0000,// row 6, 70 pixels
0x0000,0x5AEB,0xFFFF,0xFFFF,0xCE79,0xDEFB,0xFFFF,0xEF7D,0x2965,0x0000,// row 7, 80 pixels
0x18E3,0xFFFF,0xFFFF,0xAD75,0x0000,0x0861,0xDEFB,0xFFFF,0xDEFB,0x0000,// row 8, 90 pixels
0x6B6D,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 9, 100 pixels
0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x39E7,// row 10, 110 pixels
0x4A69,0xFFFF,0xFFFF,0xAD75,0x0000,0x0861,0xDEFB,0xFFFF,0xFFFF,0x0861,// row 11, 120 pixels
0x0000,0xCE79,0xFFFF,0xFFFF,0xCE79,0xDEFB,0xFFFF,0xFFFF,0x8C71,0x0000,// row 12, 130 pixels
0x0000,0x0861,0x9CF3,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x8C71,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x0861,0x39E7,0x39E7,0x0861,0x0000,0x0000,0x0000,// row 14, 150 pixels
};

const unsigned short small9[150] PROGMEM = {
0x0000,0x0000,0x18E3,0x9CF3,0xBDF7,0xAD75,0x5AEB,0x0000,0x0000,0x0000,// row 0, 10 pixels
0x0000,0x4A69,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x9CF3,0x0000,0x0000,// row 1, 20 pixels
0x0861,0xEF7D,0xFFFF,0xEF7D,0x8C71,0xBDF7,0xFFFF,0xFFFF,0x5AEB,0x0000,// row 2, 30 pixels
0x5AEB,0xFFFF,0xFFFF,0x6B6D,0x0000,0x0000,0xCE79,0xFFFF,0xCE79,0x0000,// row 3, 40 pixels
0x7BEF,0xFFFF,0xFFFF,0x39E7,0x0000,0x0000,0x7BEF,0xFFFF,0xFFFF,0x0000,// row 4, 50 pixels
0x7BEF,0xFFFF,0xFFFF,0x4A69,0x0000,0x0000,0x8C71,0xFFFF,0xFFFF,0x39E7,// row 5, 60 pixels
0x2965,0xFFFF,0xFFFF,0xCE79,0x0861,0x18E3,0xEF7D,0xFFFF,0xFFFF,0x39E7,// row 6, 70 pixels
0x0000,0xBDF7,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x39E7,// row 7, 80 pixels
0x0000,0x0861,0xBDF7,0xFFFF,0xFFFF,0xEF7D,0x9CF3,0xFFFF,0xFFFF,0x39E7,// row 8, 90 pixels
0x0000,0x0000,0x0000,0x18E3,0x39E7,0x0861,0x6B6D,0xFFFF,0xFFFF,0x0861,// row 9, 100 pixels
0x0861,0x39E7,0x6B6D,0x39E7,0x0000,0x0000,0x9CF3,0xFFFF,0xDEFB,0x0000,// row 10, 110 pixels
0x18E3,0xFFFF,0xFFFF,0xDEFB,0x0861,0x2965,0xEF7D,0xFFFF,0x8C71,0x0000,// row 11, 120 pixels
0x0000,0xBDF7,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x0861,0x0000,// row 12, 130 pixels
0x0000,0x0861,0xBDF7,0xFFFF,0xFFFF,0xFFFF,0xBDF7,0x18E3,0x0000,0x0000,// row 13, 140 pixels
0x0000,0x0000,0x0000,0x2965,0x39E7,0x18E3,0x0000,0x0000,0x0000,0x0000,// row 14, 150 pixels
};
