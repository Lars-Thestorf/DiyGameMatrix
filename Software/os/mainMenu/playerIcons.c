#include <stdint.h>

#define CONTROLLER_LEFT_COLOR 0x001F
const uint8_t controller_left_image[] = {
	0b00000000,
	0b00000000,
	0b11011111,
	0b10001101,
	0b11011111,
	0b01111110,
	0b00000000,
	0b00000000,
};

#define CONTROLLER_RIGHT_COLOR 0xF800
const uint8_t controller_right_image[] = {
	0b00000000,
	0b00000000,
	0b11011111,
	0b10101101,
	0b11011111,
	0b01111110,
	0b00000000,
	0b00000000,
};

#define CONTROLLER_FULL_COLOR 0xF81F
const uint8_t controller_full_image[] = {
	0b01100110,
	0b10100111,
	0b01000101,
	0b10100111,
	0b11100101,
	0b10100000,
	0b11100101,
	0b01100110,
};

#define CONTROLLER_DEFAULT_COLOR 0xFFFF
const uint8_t controller_default_image[] = {
	0b00000000,
	0b00000000,
	0b11111111,
	0b11111101,
	0b10110101,
	0b11111111,
	0b00000000,
	0b00000000,
};
