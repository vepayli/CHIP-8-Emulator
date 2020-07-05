#ifndef CHIP8_EMULATOR_CPU_HPP
#define CHIP8_EMULATOR_CPU_HPP

/*
 * 16, 8-bit registers V0-VF
 * In + operations VF acts as carry flags
 * In - operations VF acts as no-borrow flags
 * In draw instructions VF is set upon pixel collisions
 *
 * CPU Supports 35 opcodes, each 2-bytes long, big-endian
 *
 * Stack is used to store return address when subroutines are called.
 * Original stack was 48 bytes for up to 12 levels of nesting.
 * 
 * Two timers are present:
 *   * delay timer, times events, read and set
 *   * sound timer, when != 0, beeping sound should play
 * Both timers runs at 60Hz.
 */

class CPU {
};

#endif // CHIP8_EMULATOR_CPU_HPP
