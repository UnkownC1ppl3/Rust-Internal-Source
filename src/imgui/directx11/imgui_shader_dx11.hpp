#pragma once

#include "../../vcruntime/include.hpp"

constexpr std::size_t g_vs_size = 888;

inline std::uint8_t g_vs_data[] = { 0xAF, 0xB3, 0xA9, 0xA8, 0x4E, 0x8E, 0x87, 0x51, 0xD3, 0x91, 0xCC, 0xBA, 0x45, 0x97,
  0x0B, 0xF3, 0x06, 0x35, 0x2B, 0x0F, 0xEA, 0xEB, 0xEB, 0xEB, 0x93, 0xE8, 0xEB, 0xEB, 0xEE, 0xEB, 0xEB, 0xEB, 0xDF,
  0xEB, 0xEB, 0xEB, 0xFB, 0xEA, 0xEB, 0xEB, 0x6B, 0xEA, 0xEB, 0xEB, 0x1F, 0xEA, 0xEB, 0xEB, 0x17, 0xE9, 0xEB, 0xEB,
  0xB9, 0xAF, 0xAE, 0xAD, 0x3F, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xA7, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB,
  0xEB, 0xF7, 0xEB, 0xEB, 0xEB, 0xEB, 0xEF, 0x15, 0x14, 0xEB, 0xEA, 0xEB, 0xEB, 0x4B, 0xEB, 0xEB, 0xEB, 0xD7, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0x9D, 0x8E, 0x99, 0x9F, 0x8E, 0x93, 0xA9, 0x9E,
  0x8D, 0x8D, 0x8E, 0x99, 0xEB, 0x40, 0x40, 0x40, 0xD7, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0x8F, 0xEB, 0xEB,
  0xEB, 0xAB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0x97, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xAB, 0xEB, 0xEB, 0xEB, 0xE9, 0xEB, 0xEB, 0xEB, 0x7B, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xBB,
  0x99, 0x84, 0x81, 0x8E, 0x88, 0x9F, 0x82, 0x84, 0x85, 0xA6, 0x8A, 0x9F, 0x99, 0x82, 0x93, 0xEB, 0x40, 0x40, 0x40,
  0xE8, 0xEB, 0xE8, 0xEB, 0xEF, 0xEB, 0xEF, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xA6, 0x82, 0x88,
  0x99, 0x84, 0x98, 0x84, 0x8D, 0x9F, 0xCB, 0xC3, 0xB9, 0xC2, 0xCB, 0xA3, 0xA7, 0xB8, 0xA7, 0xCB, 0xB8, 0x83, 0x8A,
  0x8F, 0x8E, 0x99, 0xCB, 0xA8, 0x84, 0x86, 0x9B, 0x82, 0x87, 0x8E, 0x99, 0xCB, 0xDA, 0xDB, 0xC5, 0xDB, 0xC5, 0xDA,
  0xDB, 0xDB, 0xDA, 0xDA, 0xC5, 0xDA, 0xDD, 0xD8, 0xD3, 0xDF, 0xEB, 0xA2, 0xB8, 0xAC, 0xA5, 0x83, 0xEB, 0xEB, 0xEB,
  0xE8, 0xEB, 0xEB, 0xEB, 0xE3, 0xEB, 0xEB, 0xEB, 0xBB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE8, 0xE8, 0xEB, 0xEB, 0xB2, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xE4, 0xE4, 0xEB, 0xEB, 0xB4,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xE9, 0xEB, 0xEB, 0xEB,
  0xE8, 0xE8, 0xEB, 0xEB, 0xBB, 0xA4, 0xB8, 0xA2, 0xBF, 0xA2, 0xA4, 0xA5, 0xEB, 0xA8, 0xA4, 0xA7, 0xA4, 0xB9, 0xEB,
  0xBF, 0xAE, 0xB3, 0xA8, 0xA4, 0xA4, 0xB9, 0xAF, 0xEB, 0xA4, 0xB8, 0xAC, 0xA5, 0x87, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB,
  0xEB, 0xEB, 0xE3, 0xEB, 0xEB, 0xEB, 0xBB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xE8,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE4, 0xEB, 0xEB, 0xEB, 0xB7, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xE4, 0xEB, 0xEB, 0xEB, 0x89, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xE9, 0xEB, 0xEB, 0xEB, 0xE8, 0xE7,
  0xEB, 0xEB, 0xB8, 0xBD, 0xB4, 0xBB, 0xA4, 0xB8, 0xA2, 0xBF, 0xA2, 0xA4, 0xA5, 0xEB, 0xA8, 0xA4, 0xA7, 0xA4, 0xB9,
  0xEB, 0xBF, 0xAE, 0xB3, 0xA8, 0xA4, 0xA4, 0xB9, 0xAF, 0xEB, 0x40, 0xB8, 0xA3, 0xAF, 0xB9, 0xEB, 0xEA, 0xEB, 0xEB,
  0xAB, 0xEB, 0xEA, 0xEB, 0xAB, 0xEB, 0xEB, 0xEB, 0xB2, 0xEB, 0xEB, 0xEF, 0xAD, 0x65, 0xCB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEF, 0xEB, 0xEB, 0xEB, 0xB4, 0xEB, 0xEB, 0xE8, 0xD9, 0xFB, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xB4, 0xEB,
  0xEB, 0xE8, 0x19, 0xFB, 0xFB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xB4, 0xEB, 0xEB, 0xE8, 0xD9, 0xFB, 0xFB, 0xEB, 0xE9,
  0xEB, 0xEB, 0xEB, 0x8C, 0xEB, 0xEB, 0xEF, 0x19, 0xCB, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB,
  0x8E, 0xEB, 0xEB, 0xE8, 0x19, 0xCB, 0xFB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0x8E, 0xEB, 0xEB, 0xE8, 0xD9, 0xCB, 0xFB,
  0xEB, 0xE9, 0xEB, 0xEB, 0xEB, 0x83, 0xEB, 0xEB, 0xE9, 0xEA, 0xEB, 0xEB, 0xEB, 0xD3, 0xEB, 0xEB, 0xE3, 0x19, 0xEB,
  0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xBD, 0xFE, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xAD, 0x65, 0xCB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xD9, 0xEB, 0xEB, 0xE1, 0x19, 0xEB, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xAD, 0x65, 0xCB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xED, 0xFB, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xAD, 0xE5, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE3, 0x19, 0xCB, 0xFB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xAD, 0xE5, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xAD, 0x65, 0xCB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE8,
  0xEB, 0xEB, 0xEB, 0xDD, 0xEB, 0xEB, 0xEE, 0x19, 0xCB, 0xFB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xAD, 0xF5, 0xFB, 0xEB,
  0xEA, 0xEB, 0xEB, 0xEB, 0xDD, 0xEB, 0xEB, 0xEE, 0xD9, 0xCB, 0xFB, 0xEB, 0xE9, 0xEB, 0xEB, 0xEB, 0xAD, 0xFB, 0xFB,
  0xEB, 0xE9, 0xEB, 0xEB, 0xEB, 0xD5, 0xEB, 0xEB, 0xEA, 0xB8, 0xBF, 0xAA, 0xBF, 0x9F, 0xEB, 0xEB, 0xEB, 0xED, 0xEB,
  0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xED, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE9, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB };

constexpr std::size_t g_ps_size = 672;

inline std::uint8_t g_ps_data[] = { 0xAF, 0xB3, 0xA9, 0xA8, 0x1F, 0xDC, 0xD4, 0x46, 0xA7, 0x4E, 0x57, 0x33, 0xB6, 0x21,
  0x32, 0xA4, 0x0B, 0x91, 0x25, 0x71, 0xEA, 0xEB, 0xEB, 0xEB, 0x4B, 0xE9, 0xEB, 0xEB, 0xEE, 0xEB, 0xEB, 0xEB, 0xDF,
  0xEB, 0xEB, 0xEB, 0x0B, 0xEB, 0xEB, 0xEB, 0xBF, 0xEA, 0xEB, 0xEB, 0x63, 0xEA, 0xEB, 0xEB, 0xCF, 0xE9, 0xEB, 0xEB,
  0xB9, 0xAF, 0xAE, 0xAD, 0x4F, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE9, 0xEB, 0xEB,
  0xEB, 0xF7, 0xEB, 0xEB, 0xEB, 0xEB, 0xEF, 0x14, 0x14, 0xEB, 0xEA, 0xEB, 0xEB, 0x85, 0xEB, 0xEB, 0xEB, 0xB7, 0xEB,
  0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0x8E, 0xEB, 0xEB, 0xEB, 0xE9, 0xEB, 0xEB, 0xEB,
  0xEE, 0xEB, 0xEB, 0xEB, 0xEF, 0xEB, 0xEB, 0xEB, 0x14, 0x14, 0x14, 0x14, 0xEB, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB,
  0xEB, 0xE7, 0xEB, 0xEB, 0xEB, 0x98, 0x8A, 0x86, 0x9B, 0x87, 0x8E, 0x99, 0xDB, 0xEB, 0x9F, 0x8E, 0x93, 0x9F, 0x9E,
  0x99, 0x8E, 0xDB, 0xEB, 0xA6, 0x82, 0x88, 0x99, 0x84, 0x98, 0x84, 0x8D, 0x9F, 0xCB, 0xC3, 0xB9, 0xC2, 0xCB, 0xA3,
  0xA7, 0xB8, 0xA7, 0xCB, 0xB8, 0x83, 0x8A, 0x8F, 0x8E, 0x99, 0xCB, 0xA8, 0x84, 0x86, 0x9B, 0x82, 0x87, 0x8E, 0x99,
  0xCB, 0xDA, 0xDB, 0xC5, 0xDB, 0xC5, 0xDA, 0xDB, 0xDB, 0xDA, 0xDA, 0xC5, 0xDA, 0xDD, 0xD8, 0xD3, 0xDF, 0xEB, 0x40,
  0x40, 0xA2, 0xB8, 0xAC, 0xA5, 0x87, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xE3, 0xEB, 0xEB, 0xEB, 0xBB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE4,
  0xEB, 0xEB, 0xEB, 0xB7, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB,
  0xEA, 0xEB, 0xEB, 0xEB, 0xE4, 0xE4, 0xEB, 0xEB, 0x89, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xE9, 0xEB, 0xEB, 0xEB, 0xE8, 0xE8, 0xEB, 0xEB, 0xB8, 0xBD, 0xB4, 0xBB, 0xA4, 0xB8,
  0xA2, 0xBF, 0xA2, 0xA4, 0xA5, 0xEB, 0xA8, 0xA4, 0xA7, 0xA4, 0xB9, 0xEB, 0xBF, 0xAE, 0xB3, 0xA8, 0xA4, 0xA4, 0xB9,
  0xAF, 0xEB, 0x40, 0xA4, 0xB8, 0xAC, 0xA5, 0xC7, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xE3, 0xEB, 0xEB, 0xEB,
  0xCB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xE4, 0xEB, 0xEB, 0xEB, 0xB8, 0xBD, 0xB4, 0xBF, 0x8A, 0x99, 0x8C, 0x8E, 0x9F, 0xEB, 0x40, 0x40, 0xB8, 0xA3,
  0xAF, 0xB9, 0x7F, 0xEB, 0xEB, 0xEB, 0xAB, 0xEB, 0xEB, 0xEB, 0xCE, 0xEB, 0xEB, 0xEB, 0xB1, 0xEB, 0xEB, 0xE8, 0xEB,
  0x8B, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xB3, 0xF3, 0xEB, 0xEF, 0xEB, 0x9B, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xBE, 0xBE, 0xEB, 0xEB, 0x89, 0xFB, 0xEB, 0xE8, 0x19, 0xFB, 0xFB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0x89, 0xFB, 0xEB,
  0xE8, 0xD9, 0xFB, 0xFB, 0xEB, 0xE9, 0xEB, 0xEB, 0xEB, 0x8E, 0xEB, 0xEB, 0xE8, 0x19, 0xCB, 0xFB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0x83, 0xEB, 0xEB, 0xE9, 0xEA, 0xEB, 0xEB, 0xEB, 0xAE, 0xEB, 0xEB, 0xE2, 0x19, 0xEB, 0xFB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xAD, 0xFB, 0xFB, 0xEB, 0xE9, 0xEB, 0xEB, 0xEB, 0xAD, 0x95, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0x8B, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xD3, 0xEB, 0xEB, 0xEC, 0x19, 0xCB, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xAD, 0xE5, 0xFB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xAD, 0xF5, 0xFB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xD5, 0xEB,
  0xEB, 0xEA, 0xB8, 0xBF, 0xAA, 0xBF, 0x9F, 0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xE8, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEA, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEA, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB,
  0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB, 0xEB };
