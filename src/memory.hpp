#ifndef CHIP8_EMULATOR_MEMORY_HPP
#define CHIP8_EMULATOR_MEMORY_HPP

/*
 * 4096 bytes - 0x1000
 * first 512 bytes reserved, may store font data here
 * uppermost 256 bytes (0xf00 - 0xfff) reserved for display refresh
 * 96 bytes below (0xea0 - 0xeff) reserved for stack, internal use and variables 
*/

class Memory {
};

#endif // CHIP8_EMULATOR_MEMORY_HPP
