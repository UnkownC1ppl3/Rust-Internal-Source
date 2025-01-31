#pragma once

/*
 * Hacker Disassembler Engine 64
 * Copyright (c) 2008-2009, Vyacheslav Patkov.
 * All rights reserved.
 *
 * hde64.hpp: C++ header file
 */

#include <cstdint>

#define F_MODRM         0x00000001
#define F_SIB           0x00000002
#define F_IMM8          0x00000004
#define F_IMM16         0x00000008
#define F_IMM32         0x00000010
#define F_IMM64         0x00000020
#define F_DISP8         0x00000040
#define F_DISP16        0x00000080
#define F_DISP32        0x00000100
#define F_RELATIVE      0x00000200
#define F_ERROR         0x00001000
#define F_ERROR_OPCODE  0x00002000
#define F_ERROR_LENGTH  0x00004000
#define F_ERROR_LOCK    0x00008000
#define F_ERROR_OPERAND 0x00010000
#define F_PREFIX_REPNZ  0x01000000
#define F_PREFIX_REPX   0x02000000
#define F_PREFIX_REP    0x03000000
#define F_PREFIX_66     0x04000000
#define F_PREFIX_67     0x08000000
#define F_PREFIX_LOCK   0x10000000
#define F_PREFIX_SEG    0x20000000
#define F_PREFIX_REX    0x40000000
#define F_PREFIX_ANY    0x7f000000

#define PREFIX_SEGMENT_CS   0x2e
#define PREFIX_SEGMENT_SS   0x36
#define PREFIX_SEGMENT_DS   0x3e
#define PREFIX_SEGMENT_ES   0x26
#define PREFIX_SEGMENT_FS   0x64
#define PREFIX_SEGMENT_GS   0x65
#define PREFIX_LOCK         0xf0
#define PREFIX_REPNZ        0xf2
#define PREFIX_REPX         0xf3
#define PREFIX_OPERAND_SIZE 0x66
#define PREFIX_ADDRESS_SIZE 0x67

#pragma pack( push, 1 )

typedef struct {
    std::uint8_t len;
    std::uint8_t p_rep;
    std::uint8_t p_lock;
    std::uint8_t p_seg;
    std::uint8_t p_66;
    std::uint8_t p_67;
    std::uint8_t rex;
    std::uint8_t rex_w;
    std::uint8_t rex_r;
    std::uint8_t rex_x;
    std::uint8_t rex_b;
    std::uint8_t opcode;
    std::uint8_t opcode2;
    std::uint8_t modrm;
    std::uint8_t modrm_mod;
    std::uint8_t modrm_reg;
    std::uint8_t modrm_rm;
    std::uint8_t sib;
    std::uint8_t sib_scale;
    std::uint8_t sib_index;
    std::uint8_t sib_base;
    union {
        std::uint8_t imm8;
        std::uint16_t imm16;
        std::uint32_t imm32;
        std::uint64_t imm64;
    } imm;
    union {
        std::uint8_t disp8;
        std::uint16_t disp16;
        std::uint32_t disp32;
    } disp;
    std::uint32_t flags;
} hde64s;

#pragma pack( pop )

unsigned int hde64_disasm( const void* code, hde64s* hs );

__forceinline unsigned int sizeof_opcode( const void* code ) {
    hde64s data = { };
    return hde64_disasm( code, &data );
}