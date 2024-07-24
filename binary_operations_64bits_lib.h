#pragma once


void show_bin64(uint64_t value);

uint64_t set_bit64(uint64_t data, uint8_t bit_pos, bool bit_value);

uint64_t toggle_bit64(uint64_t data, uint8_t bit_pos);

uint64_t carry_rotate64(uint64_t data, int N);

uint64_t extract_bits_segment64(uint64_t value, uint8_t startBit, uint8_t endBit);