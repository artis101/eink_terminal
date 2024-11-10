#pragma once
#include "epd_driver.h"
const uint8_t ComicCodeBitmaps[5251] = {
    0xC0, 0x04, 0xE0, 0x06, 0xE0, 0x06, 0xE0, 0x07, 0xD0, 0x07, 0xC0, 0x08, 0xB0, 0x0A, 0x80, 0x09,
    0x00, 0x00, 0x50, 0x07, 0xF2, 0x6F, 0xC0, 0x2E, 0x00, 0x00, 0x11, 0xA3, 0x00, 0xB9, 0xE6, 0x00,
    0xAB, 0xE6, 0x00, 0x9C, 0xE7, 0x00, 0x7D, 0xE6, 0x00, 0x5F, 0xC4, 0x00, 0x18, 0x00, 0xE0, 0x03,
    0xD3, 0x00, 0x00, 0xF1, 0x03, 0xE7, 0x00, 0x00, 0xF3, 0x13, 0xDA, 0x25, 0xC0, 0xFF, 0xFF, 0xFF,
    0x8F, 0x30, 0xF9, 0x35, 0x9D, 0x00, 0x00, 0xE6, 0x00, 0x7D, 0x00, 0x00, 0xD8, 0x00, 0x6E, 0x00,
    0x00, 0xC9, 0x43, 0x8F, 0x04, 0xE3, 0xFF, 0xFF, 0xFF, 0x0E, 0x60, 0x8E, 0x21, 0x3F, 0x00, 0x00,
    0x5F, 0x30, 0x1F, 0x00, 0x00, 0x2E, 0x40, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x50, 0x09, 0x00, 0x00, 0x00, 0x80, 0x0A, 0x00, 0x00, 0x80, 0xFD, 0xBF, 0x05, 0x00, 0xEC, 0xD8,
    0xAA, 0x0B, 0x50, 0x2F, 0xD0, 0x05, 0x00, 0x80, 0x0D, 0xF0, 0x03, 0x00, 0x60, 0x4F, 0xF2, 0x01,
    0x00, 0x00, 0xFB, 0xFF, 0x7C, 0x00, 0x00, 0x20, 0xE8, 0xE9, 0x0D, 0x00, 0x00, 0xB7, 0x20, 0x4F,
    0x00, 0x00, 0x99, 0x10, 0x4F, 0x50, 0x00, 0x6B, 0x70, 0x0F, 0xF2, 0x7D, 0x9E, 0xFA, 0x05, 0x10,
    0xE9, 0xEF, 0x3B, 0x00, 0x00, 0x20, 0x0F, 0x00, 0x00, 0x00, 0x10, 0x0A, 0x00, 0x00, 0x90, 0xDF,
    0x04, 0x00, 0x6A, 0x00, 0xD6, 0x73, 0x0F, 0x50, 0x1E, 0x00, 0x89, 0x00, 0x3E, 0xF1, 0x05, 0x00,
    0xD6, 0x53, 0x1F, 0xAB, 0x00, 0x00, 0x90, 0xEE, 0x75, 0x1E, 0x00, 0x00, 0x00, 0x00, 0xF2, 0x04,
    0x00, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 0x00, 0x70, 0x2D, 0xFC, 0x3D, 0x00, 0x00, 0xF2,
    0x93, 0x1A, 0xE7, 0x00, 0x00, 0x9C, 0xC0, 0x05, 0xF0, 0x01, 0x70, 0x0D, 0x80, 0x2B, 0xE5, 0x00,
    0xC0, 0x04, 0x00, 0xFA, 0x4D, 0x00, 0x00, 0x50, 0xFD, 0x1B, 0x00, 0x00, 0xF2, 0x7A, 0xAE, 0x00,
    0x00, 0xF5, 0x00, 0xC8, 0x00, 0x00, 0xF4, 0x12, 0x8D, 0x00, 0x00, 0xF0, 0xEA, 0x0B, 0x00, 0x00,
    0xE2, 0x7F, 0x00, 0x57, 0x30, 0xCF, 0x6F, 0x00, 0x7D, 0xE0, 0x0A, 0xE8, 0x01, 0x4F, 0xF4, 0x02,
    0xD0, 0x6C, 0x0E, 0xF2, 0x03, 0x20, 0xFE, 0x07, 0xB0, 0x8E, 0x75, 0xFE, 0x0A, 0x00, 0xD8, 0xDF,
    0x58, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x13, 0x79, 0x9B, 0xAB, 0xAA, 0xAA, 0x78, 0x00, 0x30, 0x1E,
    0x00, 0xE2, 0x0B, 0x00, 0xDC, 0x00, 0x60, 0x2F, 0x00, 0xE0, 0x09, 0x00, 0xF4, 0x02, 0x00, 0xD9,
    0x00, 0x00, 0x9C, 0x00, 0x00, 0x7D, 0x00, 0x00, 0x5F, 0x00, 0x00, 0x6E, 0x00, 0x00, 0x7D, 0x00,
    0x00, 0xBA, 0x00, 0x00, 0xF5, 0x01, 0x00, 0xF0, 0x08, 0x00, 0x50, 0x5F, 0x00, 0x00, 0xF9, 0x08,
    0x00, 0x50, 0x1E, 0x5C, 0x00, 0x00, 0xF8, 0x03, 0x00, 0xB0, 0x0E, 0x00, 0x10, 0x7F, 0x00, 0x00,
    0xE8, 0x01, 0x00, 0xF0, 0x06, 0x00, 0xB0, 0x0A, 0x00, 0x60, 0x0F, 0x00, 0x30, 0x1F, 0x00, 0x10,
    0x3F, 0x00, 0x10, 0x4F, 0x00, 0x20, 0x2F, 0x00, 0x50, 0x0F, 0x00, 0xB0, 0x0B, 0x00, 0xF2, 0x05,
    0x00, 0xCC, 0x00, 0xD2, 0x2E, 0x00, 0xB9, 0x01, 0x00, 0x00, 0x70, 0x09, 0x00, 0x41, 0x80, 0x0C,
    0x41, 0xF5, 0x8B, 0x6C, 0xBF, 0x30, 0xFC, 0xEF, 0x06, 0x00, 0xE0, 0x8F, 0x00, 0x00, 0xD9, 0xF5,
    0x04, 0x40, 0x4F, 0x80, 0x1F, 0x40, 0x07, 0x00, 0x07, 0x00, 0x10, 0x07, 0x00, 0x00, 0x00, 0x50,
    0x0F, 0x00, 0x00, 0x00, 0x60, 0x0E, 0x00, 0x00, 0x00, 0x70, 0x0D, 0x00, 0x00, 0x00, 0x80, 0xEF,
    0xFF, 0x01, 0xC9, 0xDA, 0x6D, 0x46, 0x00, 0x04, 0x90, 0x0B, 0x00, 0x00, 0x00, 0x90, 0x0B, 0x00,
    0x00, 0x00, 0x90, 0x0B, 0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x00, 0xDA, 0x03, 0x50, 0xFF,
    0x0A, 0x10, 0xFC, 0x0B, 0x00, 0xF3, 0x05, 0x10, 0xCD, 0x00, 0xC0, 0x2E, 0x00, 0xE1, 0x03, 0x00,
    0x00, 0x21, 0x43, 0x45, 0xF7, 0xFF, 0xFF, 0xBF, 0x51, 0x34, 0x12, 0x00, 0x00, 0x01, 0xF2, 0x7F,
    0xF6, 0xBF, 0xB1, 0x4E, 0x00, 0x00, 0x00, 0x00, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x00, 0x00,
    0x00, 0x50, 0x2F, 0x00, 0x00, 0x00, 0xB0, 0x0B, 0x00, 0x00, 0x00, 0xF2, 0x04, 0x00, 0x00, 0x00,
    0xE8, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x00, 0x00, 0x00, 0x50, 0x2F, 0x00, 0x00, 0x00, 0xC0, 0x0B,
    0x00, 0x00, 0x00, 0xF3, 0x03, 0x00, 0x00, 0x00, 0xCB, 0x00, 0x00, 0x00, 0x30, 0x4F, 0x00, 0x00,
    0x00, 0xB0, 0x0C, 0x00, 0x00, 0x00, 0xF3, 0x04, 0x00, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00, 0x40,
    0x3F, 0x00, 0x00, 0x00, 0xD0, 0x0B, 0x00, 0x00, 0x00, 0xE1, 0x02, 0x00, 0x00, 0x00, 0x00, 0xE8,
    0x7D, 0x00, 0x00, 0xA0, 0x7E, 0xF8, 0x0A, 0x00, 0xF3, 0x03, 0x40, 0x5F, 0x00, 0xCA, 0x00, 0x70,
    0xCF, 0x00, 0x8C, 0x00, 0xD6, 0xF7, 0x00, 0x6E, 0x60, 0x2E, 0xF2, 0x02, 0x8C, 0xE3, 0x02, 0xF1,
    0x03, 0xBB, 0x4E, 0x00, 0xF3, 0x01, 0xF7, 0x07, 0x00, 0xE7, 0x00, 0xF2, 0x05, 0x10, 0x7E, 0x00,
    0x90, 0x8F, 0xE7, 0x0D, 0x00, 0x00, 0xD8, 0x9D, 0x00, 0x00, 0x00, 0x00, 0x90, 0x07, 0x00, 0x00,
    0x00, 0xF9, 0x09, 0x00, 0x20, 0xE8, 0xED, 0x08, 0x00, 0xF0, 0x7D, 0xD0, 0x07, 0x00, 0x10, 0x00,
    0xE0, 0x06, 0x00, 0x00, 0x00, 0xF0, 0x06, 0x00, 0x00, 0x00, 0xF0, 0x05, 0x00, 0x00, 0x00, 0xF0,
    0x05, 0x00, 0x00, 0x00, 0xF0, 0x04, 0x00, 0x00, 0x00, 0xF0, 0x04, 0x00, 0x00, 0x63, 0xF7, 0x6A,
    0x04, 0x00, 0xFB, 0xFF, 0xFF, 0x0E, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0xA4, 0xFD, 0x2B, 0x00,
    0x60, 0xBF, 0x67, 0xFC, 0x01, 0x00, 0x01, 0x00, 0xD0, 0x08, 0x00, 0x00, 0x00, 0xA0, 0x0B, 0x00,
    0x00, 0x00, 0xD0, 0x09, 0x00, 0x00, 0x10, 0xFB, 0x01, 0x00, 0x00, 0xF6, 0x3D, 0x00, 0x00, 0xB0,
    0x7F, 0x00, 0x00, 0x00, 0xDC, 0x02, 0x00, 0x00, 0x60, 0x3F, 0x00, 0x00, 0x00, 0xD0, 0x9E, 0x78,
    0x66, 0x04, 0xE0, 0xFF, 0xEE, 0xEE, 0x0E, 0x50, 0xEB, 0xCF, 0x04, 0xF5, 0x7A, 0xB6, 0x3F, 0x00,
    0x00, 0x00, 0x8D, 0x00, 0x00, 0x20, 0x6F, 0x00, 0x20, 0xF8, 0x0B, 0x00, 0xFB, 0x9F, 0x00, 0x00,
    0x88, 0xFA, 0x1C, 0x00, 0x00, 0x10, 0x9D, 0x00, 0x00, 0x00, 0xC9, 0x00, 0x00, 0x00, 0x9D, 0xDC,
    0x57, 0xD7, 0x2E, 0x92, 0xFD, 0xAD, 0x02, 0x00, 0x00, 0x00, 0x6C, 0x00, 0x00, 0x00, 0xB0, 0x8F,
    0x00, 0x00, 0x00, 0xCA, 0x7E, 0x00, 0x00, 0x80, 0x1E, 0x7D, 0x00, 0x00, 0xF4, 0x03, 0x7D, 0x00,
    0x10, 0x7E, 0x00, 0x7D, 0x00, 0xA0, 0x0C, 0x00, 0x7D, 0x00, 0xF4, 0xDE, 0xFE, 0xFF, 0xBF, 0x93,
    0x78, 0x56, 0xBD, 0x25, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 0x00, 0x9B, 0x00, 0x00, 0x00,
    0x00, 0x89, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xED, 0xFE, 0x3F, 0x00, 0xF3, 0x78, 0x56,
    0x05, 0x00, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0xE7, 0xD8, 0xDF, 0x06,
    0x00, 0xF9, 0x8E, 0x96, 0x7F, 0x00, 0x53, 0x00, 0x00, 0xE7, 0x00, 0x00, 0x00, 0x00, 0xF3, 0x01,
    0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0xAD, 0x00, 0x92, 0x57, 0xE7, 0x1E, 0x00, 0xB1,
    0xFD, 0x9D, 0x01, 0x00, 0x00, 0x80, 0xFC, 0xBF, 0x00, 0x20, 0xED, 0x68, 0x37, 0x00, 0xC0, 0x1C,
    0x00, 0x00, 0x00, 0xF4, 0x02, 0x00, 0x00, 0x00, 0xCA, 0x20, 0x24, 0x00, 0x00, 0xBC, 0xFD, 0xFF,
    0x3D, 0x00, 0xFE, 0x38, 0x20, 0xEB, 0x01, 0x7E, 0x00, 0x00, 0xF0, 0x05, 0x8C, 0x00, 0x00, 0xD0,
    0x07, 0xE8, 0x00, 0x00, 0xF3, 0x04, 0xE1, 0x7D, 0x95, 0xAF, 0x00, 0x10, 0xDA, 0xCF, 0x06, 0x00,
    0x90, 0xCB, 0xED, 0xFE, 0x3F, 0x90, 0x9A, 0x78, 0xD6, 0x0E, 0x00, 0x00, 0x00, 0xF3, 0x05, 0x00,
    0x00, 0x00, 0xBB, 0x00, 0x00, 0x00, 0x30, 0x3F, 0x00, 0x00, 0x00, 0xB0, 0x0B, 0x00, 0x00, 0x00,
    0xF3, 0x03, 0x00, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x7D, 0x00, 0x00, 0x00, 0x30, 0x2F,
    0x00, 0x00, 0x00, 0x80, 0x0D, 0x00, 0x00, 0x00, 0xA0, 0x06, 0x00, 0x00, 0x30, 0xFB, 0xAE, 0x03,
    0x00, 0xF2, 0x7C, 0xD8, 0x4F, 0x00, 0xD8, 0x00, 0x00, 0xDC, 0x00, 0xB8, 0x00, 0x00, 0xBD, 0x00,
    0xF3, 0x05, 0xB0, 0x1E, 0x00, 0x70, 0xCF, 0xDD, 0x01, 0x00, 0x40, 0xCF, 0xFE, 0x1A, 0x00, 0xF2,
    0x07, 0x30, 0xDC, 0x00, 0xD8, 0x00, 0x00, 0xF1, 0x03, 0xC8, 0x00, 0x00, 0xF3, 0x02, 0xF3, 0x6B,
    0x85, 0xBE, 0x00, 0x30, 0xEB, 0xDF, 0x07, 0x00, 0x10, 0xE9, 0xCE, 0x05, 0x00, 0xE1, 0x7D, 0xA6,
    0x6F, 0x00, 0xD9, 0x00, 0x00, 0xE8, 0x00, 0x7D, 0x00, 0x00, 0xF2, 0x02, 0x6E, 0x00, 0x00, 0xF0,
    0x04, 0xBB, 0x00, 0x00, 0xF3, 0x03, 0xF3, 0x6B, 0x96, 0xFF, 0x01, 0x30, 0xEB, 0xCF, 0xBF, 0x00,
    0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0xF6, 0x07, 0x00, 0x00, 0xB1, 0x7F, 0x00, 0x00, 0x00,
    0xC8, 0x03, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x9F, 0xF3, 0xEF, 0xA0, 0x5E, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x00, 0xF4, 0x4F, 0xF9, 0x9F, 0xC3, 0x2D, 0x30, 0xCD, 0x02, 0x90, 0xFF, 0x09,
    0x40, 0xFF, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0x05, 0x20, 0xFF, 0x0D, 0x00, 0xFB, 0x0E, 0x00, 0xE1, 0x08, 0x00, 0xEB, 0x01, 0xA0, 0x4F,
    0x00, 0xD0, 0x05, 0x00, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x91, 0xBF, 0x00, 0x70, 0xEF, 0x05,
    0x20, 0xFC, 0x08, 0x00, 0xF7, 0x2C, 0x00, 0x00, 0xFC, 0x3B, 0x00, 0x00, 0x50, 0xFC, 0x3B, 0x00,
    0x00, 0x20, 0xFA, 0x3C, 0x00, 0x00, 0x30, 0xBB, 0xC6, 0xED, 0xFE, 0xEF, 0x00, 0x84, 0x67, 0x66,
    0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0xDD, 0xFE, 0xEF,
    0x01, 0x86, 0x67, 0x56, 0x55, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x4C, 0x00, 0x00, 0x00,
    0x20, 0xFA, 0x4B, 0x00, 0x00, 0x00, 0x20, 0xFA, 0x5D, 0x00, 0x00, 0x00, 0x50, 0xFF, 0x00, 0x00,
    0x00, 0xF8, 0x2C, 0x00, 0x00, 0xD4, 0x6F, 0x00, 0x00, 0xA0, 0xAF, 0x01, 0x00, 0x00, 0xD5, 0x04,
    0x00, 0x00, 0x00, 0x60, 0xEB, 0xAE, 0x02, 0xF4, 0x6A, 0xC6, 0x2F, 0x00, 0x00, 0x00, 0xAC, 0x00,
    0x00, 0x00, 0xBA, 0x00, 0x00, 0x91, 0x4F, 0x00, 0x40, 0xEE, 0x04, 0x00, 0xF0, 0x09, 0x00, 0x00,
    0xF0, 0x03, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x50, 0x07, 0x00, 0x00, 0xF2, 0x6F, 0x00, 0x00,
    0xC0, 0x2D, 0x00, 0x00, 0x00, 0x42, 0x01, 0x00, 0x00, 0xB1, 0xFF, 0xBF, 0x00, 0x00, 0xEC, 0x15,
    0xE4, 0x0B, 0x50, 0x3F, 0x00, 0x40, 0x2F, 0xB0, 0x0A, 0x00, 0x00, 0x6E, 0xF0, 0x05, 0xA1, 0xCE,
    0x8E, 0xF2, 0x02, 0xDC, 0x86, 0xAF, 0xF4, 0x30, 0x2F, 0x00, 0x8C, 0xF5, 0x60, 0x0E, 0x00, 0x6E,
    0xF6, 0x50, 0x0F, 0x50, 0x1F, 0xF5, 0x10, 0xAF, 0xF7, 0x09, 0xF3, 0x02, 0xD5, 0x8E, 0x00, 0xF0,
    0x07, 0x00, 0x00, 0x00, 0xA0, 0x1D, 0x00, 0x00, 0x12, 0x10, 0xED, 0x68, 0xB7, 0x6F, 0x00, 0x80,
    0xFC, 0xAD, 0x03, 0x00, 0x00, 0x60, 0x0C, 0x00, 0x00, 0x00, 0xF1, 0x3F, 0x00, 0x00, 0x00, 0xDA,
    0x7D, 0x00, 0x00, 0x30, 0x3F, 0xC9, 0x00, 0x00, 0xB0, 0x0A, 0xF5, 0x01, 0x00, 0xF3, 0x02, 0xF0,
    0x05, 0x00, 0x9B, 0x10, 0xC0, 0x09, 0x81, 0xFF, 0xFF, 0xFF, 0x0D, 0xF3, 0x9E, 0x78, 0x86, 0x0F,
    0xF0, 0x07, 0x00, 0x10, 0x4F, 0xF4, 0x01, 0x00, 0x00, 0x8D, 0x51, 0x00, 0x00, 0x00, 0x89, 0xE8,
    0xEF, 0x9D, 0x02, 0x00, 0xCB, 0x65, 0xD8, 0x3F, 0x00, 0x9B, 0x00, 0x00, 0xBC, 0x00, 0xAB, 0x00,
    0x00, 0xD7, 0x00, 0xAB, 0x00, 0x00, 0xAB, 0x00, 0xCA, 0x34, 0xC6, 0x3E, 0x00, 0xFA, 0xFF, 0xFF,
    0x1A, 0x00, 0xBA, 0x21, 0x84, 0xEE, 0x03, 0xBA, 0x00, 0x00, 0xD0, 0x0A, 0xB9, 0x00, 0x00, 0xE1,
    0x07, 0xB9, 0x20, 0x84, 0xDE, 0x01, 0xF9, 0xFF, 0xCF, 0x07, 0x00, 0x74, 0x24, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x2B, 0x00, 0x20, 0xEB, 0xBE, 0x4F, 0x00, 0xF4, 0x7C, 0xB6, 0x3F, 0x10,
    0x9F, 0x00, 0x20, 0x3F, 0x80, 0x0E, 0x00, 0x10, 0x2F, 0xE0, 0x07, 0x00, 0x00, 0x00, 0xF0, 0x04,
    0x00, 0x00, 0x00, 0xF2, 0x02, 0x00, 0x00, 0x00, 0xF2, 0x02, 0x00, 0x00, 0x00, 0xF0, 0x04, 0x00,
    0x00, 0x00, 0xC0, 0x0A, 0x00, 0x30, 0xAD, 0x40, 0xBF, 0x76, 0xFB, 0x1C, 0x00, 0xB3, 0xDE, 0x5A,
    0x00, 0xE3, 0xEF, 0x9C, 0x02, 0x00, 0xE0, 0x7A, 0xD9, 0x9F, 0x00, 0xD0, 0x07, 0x00, 0xF5, 0x07,
    0xD0, 0x08, 0x00, 0x60, 0x1F, 0xC0, 0x08, 0x00, 0x00, 0x4F, 0xC0, 0x08, 0x00, 0x00, 0x7D, 0xC0,
    0x09, 0x00, 0x00, 0x6E, 0xC0, 0x08, 0x00, 0x10, 0x3F, 0xC0, 0x08, 0x00, 0xA0, 0x0E, 0xC0, 0x08,
    0x00, 0xF7, 0x04, 0xD0, 0x6B, 0xD8, 0x6F, 0x00, 0x80, 0xEE, 0x9C, 0x01, 0x00, 0xBA, 0xDC, 0xFE,
    0xFF, 0x03, 0xEB, 0x79, 0x56, 0x66, 0x00, 0xBA, 0x00, 0x00, 0x00, 0x00, 0xB9, 0x00, 0x00, 0x00,
    0x00, 0xB9, 0x10, 0x32, 0x13, 0x00, 0xFC, 0xFF, 0xFF, 0x9F, 0x00, 0xCB, 0x45, 0x34, 0x01, 0x00,
    0x9C, 0x00, 0x00, 0x00, 0x00, 0x8D, 0x00, 0x00, 0x00, 0x00, 0x8D, 0x00, 0x00, 0x00, 0x00, 0xF9,
    0x8A, 0x67, 0x55, 0x01, 0x70, 0xDB, 0xFE, 0xFF, 0x06, 0xC6, 0xCB, 0xFE, 0xEF, 0x06, 0xF7, 0x8A,
    0x67, 0x65, 0x02, 0xE6, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0xF5, 0x00, 0x00,
    0x00, 0x00, 0xF5, 0x21, 0x43, 0x24, 0x00, 0xF6, 0xFF, 0xFF, 0xBF, 0x00, 0xF6, 0x23, 0x01, 0x00,
    0x00, 0xE6, 0x00, 0x00, 0x00, 0x00, 0xE7, 0x00, 0x00, 0x00, 0x00, 0xD7, 0x00, 0x00, 0x00, 0x00,
    0xB5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xFB, 0x9D, 0x03, 0x00, 0xE2, 0x7C, 0xD7, 0x0E, 0x00,
    0xBE, 0x00, 0x00, 0x00, 0x60, 0x1F, 0x00, 0x00, 0x00, 0xE0, 0x08, 0x00, 0x00, 0x00, 0xF1, 0x03,
    0x00, 0x53, 0x67, 0xF4, 0x00, 0xFA, 0xFF, 0xBF, 0xF5, 0x00, 0x53, 0x22, 0x3F, 0xF3, 0x01, 0x00,
    0x60, 0x0F, 0xE0, 0x09, 0x00, 0xE1, 0x08, 0x50, 0xAF, 0x76, 0xDE, 0x00, 0x00, 0xC4, 0xDF, 0x08,
    0x00, 0xA0, 0x06, 0x00, 0x00, 0x4C, 0xB0, 0x09, 0x00, 0x00, 0x3F, 0xB0, 0x0A, 0x00, 0x30, 0x1F,
    0xA0, 0x0B, 0x00, 0x50, 0x0F, 0xA0, 0x0B, 0x00, 0x60, 0x0F, 0x90, 0x3C, 0x54, 0x84, 0x0F, 0xA0,
    0xFF, 0xFF, 0xFF, 0x0F, 0xA0, 0x1B, 0x00, 0x50, 0x0F, 0xB0, 0x09, 0x00, 0x30, 0x1F, 0xD0, 0x08,
    0x00, 0x30, 0x2F, 0xF0, 0x06, 0x00, 0x20, 0x3F, 0xE0, 0x02, 0x00, 0x00, 0x2E, 0xE0, 0xFF, 0xDE,
    0x4D, 0x40, 0xB5, 0x7E, 0x28, 0x00, 0x90, 0x0C, 0x00, 0x00, 0x90, 0x0B, 0x00, 0x00, 0xA0, 0x0B,
    0x00, 0x00, 0xA0, 0x0A, 0x00, 0x00, 0x90, 0x0B, 0x00, 0x00, 0x80, 0x0C, 0x00, 0x00, 0x70, 0x0D,
    0x00, 0x00, 0x60, 0x0E, 0x00, 0x40, 0xA6, 0x4F, 0x15, 0xF2, 0xFF, 0xFF, 0x6F, 0x40, 0x23, 0x01,
    0x00, 0x30, 0xCB, 0xED, 0xFF, 0x06, 0x20, 0x89, 0xE7, 0x5B, 0x01, 0x00, 0x00, 0xC0, 0x09, 0x00,
    0x00, 0x00, 0xA0, 0x0A, 0x00, 0x00, 0x00, 0x90, 0x0B, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x00, 0x00,
    0x00, 0x70, 0x0D, 0x00, 0x54, 0x00, 0x70, 0x0E, 0x00, 0x8D, 0x00, 0x60, 0x0E, 0x00, 0x8D, 0x00,
    0x80, 0x0D, 0x00, 0xF7, 0x03, 0xA0, 0x0C, 0x00, 0xA0, 0xAF, 0xF6, 0x07, 0x00, 0x00, 0xC5, 0xBF,
    0x00, 0x00, 0xD0, 0x03, 0x00, 0x80, 0x02, 0xF0, 0x04, 0x00, 0xEB, 0x02, 0xF1, 0x03, 0x90, 0x3F,
    0x00, 0xF3, 0x01, 0xFA, 0x04, 0x00, 0xF4, 0xD4, 0x3E, 0x00, 0x00, 0xF4, 0xCF, 0x01, 0x00, 0x00,
    0xF5, 0xDD, 0x01, 0x00, 0x00, 0xF5, 0xD1, 0x1D, 0x00, 0x00, 0xF5, 0x10, 0xCE, 0x00, 0x00, 0xF5,
    0x00, 0xE2, 0x1C, 0x00, 0xF4, 0x01, 0x10, 0xDD, 0x01, 0xE2, 0x00, 0x00, 0xC1, 0x06, 0xE0, 0x02,
    0x00, 0x00, 0x00, 0xF0, 0x04, 0x00, 0x00, 0x00, 0xF0, 0x05, 0x00, 0x00, 0x00, 0xF0, 0x05, 0x00,
    0x00, 0x00, 0xF0, 0x05, 0x00, 0x00, 0x00, 0xF0, 0x05, 0x00, 0x00, 0x00, 0xF0, 0x06, 0x00, 0x00,
    0x00, 0xF0, 0x06, 0x00, 0x00, 0x00, 0xF0, 0x06, 0x00, 0x00, 0x00, 0xF0, 0x06, 0x00, 0x00, 0x00,
    0xF0, 0x69, 0x97, 0xEB, 0x07, 0xD0, 0xEF, 0xCD, 0x79, 0x02, 0xD1, 0x02, 0x00, 0x40, 0x0D, 0x00,
    0xF3, 0x0A, 0x00, 0xC0, 0x0F, 0x00, 0xF4, 0x2F, 0x00, 0xF3, 0x2F, 0x00, 0xF4, 0x9C, 0x00, 0xAA,
    0x4F, 0x00, 0xF5, 0xF4, 0x11, 0x3F, 0x5F, 0x00, 0xE6, 0xD0, 0x77, 0x0C, 0x7D, 0x00, 0xD7, 0x60,
    0xED, 0x05, 0x9C, 0x00, 0xD8, 0x00, 0xEE, 0x00, 0xAA, 0x00, 0xC9, 0x00, 0x45, 0x00, 0xC8, 0x00,
    0xBA, 0x00, 0x00, 0x00, 0xD7, 0x00, 0xAA, 0x00, 0x00, 0x00, 0xF5, 0x00, 0x79, 0x00, 0x00, 0x00,
    0xD3, 0x00, 0x6B, 0x00, 0x00, 0xE2, 0x00, 0xFD, 0x01, 0x00, 0xF3, 0x01, 0xFD, 0x09, 0x00, 0xF2,
    0x02, 0xED, 0x2F, 0x00, 0xF2, 0x03, 0x8D, 0xAC, 0x00, 0xF1, 0x03, 0x7D, 0xF3, 0x04, 0xF1, 0x03,
    0x7D, 0xA0, 0x0D, 0xF1, 0x03, 0x7D, 0x10, 0x7F, 0xF2, 0x03, 0x7E, 0x00, 0xF6, 0xF5, 0x03, 0x6E,
    0x00, 0xB0, 0xFE, 0x02, 0x6E, 0x00, 0x10, 0xFE, 0x01, 0x4C, 0x00, 0x00, 0xE4, 0x00, 0x00, 0x50,
    0xFD, 0x6C, 0x00, 0x00, 0xF4, 0x69, 0xF9, 0x09, 0x10, 0x8F, 0x00, 0x50, 0x2F, 0x60, 0x0E, 0x00,
    0x00, 0x6E, 0xC0, 0x09, 0x00, 0x00, 0x8C, 0xF0, 0x05, 0x00, 0x00, 0x6E, 0xF1, 0x03, 0x00, 0x00,
    0x4F, 0xF3, 0x01, 0x00, 0x30, 0x2F, 0xF1, 0x03, 0x00, 0x90, 0x0C, 0xE0, 0x08, 0x00, 0xF3, 0x05,
    0x50, 0xAF, 0x86, 0x9F, 0x00, 0x00, 0xC4, 0xEF, 0x08, 0x00, 0xC1, 0xEF, 0x6B, 0x00, 0x00, 0xF5,
    0x66, 0xFA, 0x0C, 0x00, 0xF5, 0x00, 0x20, 0xAE, 0x00, 0xF5, 0x00, 0x00, 0xF5, 0x00, 0xF5, 0x00,
    0x00, 0xF4, 0x01, 0xF5, 0x00, 0x10, 0xCC, 0x00, 0xF4, 0x66, 0xF9, 0x1E, 0x00, 0xF4, 0xEF, 0x7C,
    0x00, 0x00, 0xF4, 0x01, 0x00, 0x00, 0x00, 0xF3, 0x01, 0x00, 0x00, 0x00, 0xF3, 0x01, 0x00, 0x00,
    0x00, 0xE1, 0x01, 0x00, 0x00, 0x00, 0x00, 0x70, 0xEC, 0x3B, 0x00, 0x00, 0x00, 0xFA, 0x69, 0xFB,
    0x04, 0x00, 0x40, 0x4F, 0x00, 0x90, 0x0E, 0x00, 0xC0, 0x0A, 0x00, 0x10, 0x4F, 0x00, 0xF0, 0x05,
    0x00, 0x00, 0x7D, 0x00, 0xF2, 0x03, 0x00, 0x00, 0x8C, 0x00, 0xF3, 0x01, 0x00, 0x00, 0x5F, 0x00,
    0xF1, 0x03, 0x9C, 0x20, 0x2F, 0x00, 0xF0, 0x06, 0xF4, 0xA4, 0x0D, 0x00, 0x90, 0x0D, 0x90, 0xFE,
    0x04, 0x00, 0x20, 0xCE, 0x86, 0xEF, 0x00, 0x00, 0x00, 0xA2, 0xEE, 0xE9, 0x0B, 0x00, 0x00, 0x00,
    0x00, 0x30, 0xCF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xD2, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xF2, 0xBD, 0x27, 0x00, 0x00, 0xF4, 0x97, 0xFD, 0x0A, 0x00, 0xF5, 0x00, 0x40, 0xAE, 0x00, 0xD7,
    0x00, 0x00, 0xF5, 0x00, 0xC8, 0x00, 0x00, 0xF4, 0x01, 0xBA, 0x00, 0x20, 0xCD, 0x00, 0xCB, 0x87,
    0xFC, 0x1C, 0x00, 0xFC, 0xFF, 0x38, 0x00, 0x00, 0x9D, 0xF9, 0x2B, 0x00, 0x00, 0x7D, 0x30, 0xFD,
    0x06, 0x00, 0x7D, 0x00, 0x80, 0xAF, 0x00, 0x5B, 0x00, 0x00, 0xE4, 0x09, 0x00, 0x00, 0x00, 0x10,
    0x01, 0x00, 0x80, 0xFD, 0xBE, 0x05, 0x00, 0xEC, 0x58, 0x96, 0x0B, 0x50, 0x2F, 0x00, 0x00, 0x00,
    0x80, 0x0D, 0x00, 0x00, 0x00, 0x60, 0x5F, 0x01, 0x00, 0x00, 0x00, 0xFA, 0xFF, 0x8D, 0x01, 0x00,
    0x10, 0x53, 0xD7, 0x0D, 0x00, 0x00, 0x00, 0x10, 0x4F, 0x00, 0x00, 0x00, 0x10, 0x3F, 0x60, 0x00,
    0x00, 0x80, 0x0F, 0xE2, 0x8E, 0x66, 0xFB, 0x05, 0x10, 0xC8, 0xEF, 0x3B, 0x00, 0xC6, 0xCC, 0xDC,
    0xED, 0xCF, 0x83, 0x88, 0xDD, 0x67, 0x36, 0x00, 0x00, 0xB9, 0x00, 0x00, 0x00, 0x00, 0xC9, 0x00,
    0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x00, 0xD7, 0x00, 0x00, 0x00, 0x00, 0xE7, 0x00, 0x00,
    0x00, 0x00, 0xE6, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0xF5, 0x00, 0x00, 0x00,
    0x00, 0xF5, 0x00, 0x00, 0x00, 0x00, 0xD3, 0x00, 0x00, 0x60, 0x05, 0x00, 0x20, 0x0D, 0xB0, 0x09,
    0x00, 0x30, 0x2F, 0xC0, 0x08, 0x00, 0x10, 0x3F, 0xD0, 0x07, 0x00, 0x00, 0x5F, 0xE0, 0x06, 0x00,
    0x00, 0x6F, 0xF0, 0x06, 0x00, 0x00, 0x6E, 0xF0, 0x05, 0x00, 0x00, 0x7D, 0xF0, 0x05, 0x00, 0x00,
    0x6E, 0xE0, 0x06, 0x00, 0x00, 0x4F, 0xA0, 0x0C, 0x00, 0x70, 0x1E, 0x20, 0xCF, 0x66, 0xFA, 0x06,
    0x00, 0xB2, 0xEE, 0x5C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xA6, 0x00, 0x00, 0x00, 0xBB, 0xF5,
    0x01, 0x00, 0x20, 0x5F, 0xF1, 0x05, 0x00, 0x90, 0x0D, 0xC0, 0x0A, 0x00, 0xE0, 0x07, 0x70, 0x0E,
    0x00, 0xF5, 0x01, 0x20, 0x3F, 0x00, 0xAB, 0x00, 0x00, 0x9C, 0x10, 0x4F, 0x00, 0x00, 0xE6, 0x70,
    0x0E, 0x00, 0x00, 0xF1, 0xC5, 0x09, 0x00, 0x00, 0xA0, 0xFD, 0x04, 0x00, 0x00, 0x30, 0xEF, 0x00,
    0x00, 0x00, 0x00, 0x7A, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0xE1, 0x01, 0xAB, 0x00, 0x00, 0x00,
    0xF4, 0x00, 0xC8, 0x00, 0x10, 0x00, 0xE7, 0x00, 0xF5, 0x00, 0xF5, 0x00, 0xBA, 0x00, 0xF1, 0x03,
    0xF9, 0x04, 0x8C, 0x00, 0xE0, 0x07, 0xFD, 0x08, 0x6F, 0x00, 0xA0, 0x1A, 0x8F, 0x2D, 0x3F, 0x00,
    0x70, 0x6E, 0x2D, 0x7F, 0x0F, 0x00, 0x30, 0xCF, 0x09, 0xED, 0x0D, 0x00, 0x00, 0xFF, 0x05, 0xF8,
    0x0A, 0x00, 0x00, 0xFB, 0x01, 0xF4, 0x07, 0x00, 0x00, 0xA6, 0x00, 0xC0, 0x04, 0x00, 0xB0, 0x06,
    0x00, 0x00, 0x99, 0x80, 0x0E, 0x00, 0x60, 0x3F, 0x10, 0x7F, 0x00, 0xF3, 0x07, 0x00, 0xE8, 0x11,
    0xAE, 0x00, 0x00, 0xD0, 0xA9, 0x1E, 0x00, 0x00, 0x40, 0xFF, 0x03, 0x00, 0x00, 0x20, 0xEF, 0x01,
    0x00, 0x00, 0xD0, 0xDC, 0x0B, 0x00, 0x00, 0xEA, 0x31, 0x8F, 0x00, 0x60, 0x3F, 0x00, 0xF5, 0x05,
    0xF3, 0x07, 0x00, 0x80, 0x3F, 0xA8, 0x00, 0x00, 0x00, 0x8A, 0xD4, 0x00, 0x00, 0x00, 0x98, 0xE1,
    0x09, 0x00, 0x20, 0x6F, 0x60, 0x3F, 0x00, 0xA0, 0x0E, 0x00, 0xCB, 0x00, 0xF3, 0x06, 0x00, 0xF2,
    0x06, 0xDB, 0x00, 0x00, 0x80, 0x5E, 0x4F, 0x00, 0x00, 0x00, 0xFE, 0x0A, 0x00, 0x00, 0x00, 0xF6,
    0x01, 0x00, 0x00, 0x00, 0xF5, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0xE6, 0x00,
    0x00, 0x00, 0x00, 0xB5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0xEF, 0xFF, 0xFF, 0x2F,
    0x50, 0x66, 0x55, 0xF7, 0x0C, 0x00, 0x00, 0x00, 0xEC, 0x01, 0x00, 0x00, 0x80, 0x4F, 0x00, 0x00,
    0x00, 0xF3, 0x08, 0x00, 0x00, 0x00, 0xDD, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0xF2,
    0x09, 0x00, 0x00, 0x00, 0xEB, 0x01, 0x00, 0x00, 0x50, 0x5F, 0x00, 0x00, 0x00, 0xE0, 0x4D, 0x55,
    0x55, 0x26, 0xF3, 0xEF, 0xEE, 0xEE, 0x6E, 0xC9, 0xFE, 0x1F, 0xEF, 0x69, 0x05, 0x5F, 0x00, 0x00,
    0x6E, 0x00, 0x00, 0x6E, 0x00, 0x00, 0x6E, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x7D, 0x00, 0x00, 0x7D,
    0x00, 0x00, 0x7D, 0x00, 0x00, 0x8D, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x8C, 0x00,
    0x00, 0x8C, 0x00, 0x00, 0x9C, 0x00, 0x00, 0xBC, 0x56, 0x15, 0xE8, 0xFF, 0x5F, 0xD3, 0x00, 0x00,
    0x00, 0x00, 0xE0, 0x08, 0x00, 0x00, 0x00, 0x70, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x00, 0x00,
    0x00, 0x00, 0xF7, 0x01, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x80, 0x0E, 0x00, 0x00,
    0x00, 0x10, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xE9, 0x00, 0x00, 0x00, 0x00, 0xF1, 0x05, 0x00, 0x00,
    0x00, 0xA0, 0x0D, 0x00, 0x00, 0x00, 0x30, 0x4F, 0x00, 0x00, 0x00, 0x00, 0xBC, 0x00, 0x00, 0x00,
    0x00, 0xF5, 0x02, 0x00, 0x00, 0x00, 0xE0, 0x08, 0x00, 0x00, 0x00, 0x80, 0x0E, 0x00, 0x00, 0x00,
    0x10, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x69, 0xA3, 0xEC, 0xCF, 0x00, 0xB4, 0x79, 0xF9, 0x00, 0x00,
    0x00, 0xF4, 0x00, 0x00, 0x00, 0xF3, 0x01, 0x00, 0x00, 0xF2, 0x02, 0x00, 0x00, 0xF2, 0x03, 0x00,
    0x00, 0xF1, 0x03, 0x00, 0x00, 0xF0, 0x04, 0x00, 0x00, 0xF0, 0x05, 0x00, 0x00, 0xE0, 0x06, 0x00,
    0x00, 0xE0, 0x07, 0x00, 0x00, 0xD0, 0x07, 0x00, 0x00, 0xC0, 0x08, 0x00, 0x00, 0xC0, 0x09, 0x00,
    0x00, 0xB0, 0x0A, 0x00, 0x00, 0xA0, 0x0A, 0x30, 0x65, 0xD7, 0x0B, 0xD0, 0xFF, 0xDE, 0x07, 0x00,
    0x00, 0xA1, 0x02, 0x00, 0x00, 0x00, 0xF9, 0x09, 0x00, 0x00, 0x30, 0xBF, 0x1F, 0x00, 0x00, 0xD0,
    0x0B, 0x7E, 0x00, 0x00, 0xF7, 0x02, 0xE6, 0x01, 0x20, 0x7F, 0x00, 0xE0, 0x08, 0xB0, 0x0C, 0x00,
    0x60, 0x1F, 0xB0, 0x03, 0x00, 0x00, 0x4C, 0x50, 0x76, 0x87, 0xB9, 0x7C, 0xF4, 0xEF, 0xCD, 0xAB,
    0x48, 0xE3, 0x04, 0x00, 0xA0, 0x8F, 0x00, 0x00, 0xF6, 0x1C, 0x00, 0x20, 0x3B, 0x30, 0xEA, 0xBF,
    0x02, 0x00, 0xF0, 0x7C, 0xC6, 0x0D, 0x00, 0x00, 0x00, 0x10, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x8C,
    0x00, 0x50, 0xEC, 0xCF, 0xBE, 0x00, 0xF6, 0x6A, 0x96, 0xCD, 0x00, 0x9C, 0x00, 0x00, 0xE7, 0x00,
    0x8D, 0x00, 0x10, 0xFC, 0x00, 0xF9, 0x67, 0xE9, 0xFE, 0x01, 0x90, 0xFE, 0x6C, 0xF2, 0x02, 0x00,
    0x00, 0x00, 0x40, 0x00, 0xD1, 0x01, 0x00, 0x00, 0x00, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xE6, 0x00,
    0x00, 0x00, 0x00, 0xE7, 0x00, 0x00, 0x00, 0x00, 0xD7, 0xC4, 0xAE, 0x02, 0x00, 0xF7, 0x9F, 0xC6,
    0x1E, 0x00, 0xF6, 0x04, 0x00, 0x9D, 0x00, 0xE6, 0x00, 0x00, 0xF6, 0x00, 0xF6, 0x00, 0x00, 0xF3,
    0x01, 0xF5, 0x00, 0x00, 0xF2, 0x02, 0xF5, 0x00, 0x00, 0xF5, 0x00, 0xF5, 0x00, 0x00, 0xAD, 0x00,
    0xF7, 0x6A, 0xD7, 0x1E, 0x00, 0xCB, 0xFC, 0x9D, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xB4, 0xDF, 0x08, 0x00, 0x50, 0xBF, 0x86, 0xEE, 0x00, 0xF1, 0x08, 0x00, 0x51, 0x00, 0xE8, 0x00,
    0x00, 0x00, 0x00, 0x9B, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x8C, 0x00, 0x00,
    0x00, 0x00, 0xD9, 0x00, 0x00, 0xE3, 0x05, 0xE1, 0x6C, 0xA6, 0xAF, 0x00, 0x10, 0xEA, 0xBE, 0x05,
    0x00, 0x00, 0x00, 0x00, 0xD0, 0x03, 0x00, 0x00, 0x00, 0xF2, 0x03, 0x00, 0x00, 0x00, 0xF4, 0x00,
    0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0xC5, 0xCF, 0xDB, 0x00, 0x60, 0xAF, 0x96, 0xCF, 0x00, 0xF1,
    0x08, 0x00, 0xB9, 0x00, 0xF7, 0x00, 0x00, 0xBA, 0x00, 0xAA, 0x00, 0x00, 0xBA, 0x00, 0x8C, 0x00,
    0x00, 0xB9, 0x00, 0x8C, 0x00, 0x00, 0xC8, 0x00, 0xD9, 0x00, 0x10, 0xDC, 0x00, 0xF2, 0x6B, 0xE8,
    0xFE, 0x01, 0x30, 0xFC, 0x8D, 0xE0, 0x09, 0x00, 0x00, 0x00, 0x30, 0x04, 0x00, 0xB4, 0xDE, 0x08,
    0x00, 0x60, 0xBF, 0x96, 0xAF, 0x00, 0xF1, 0x08, 0x00, 0xF7, 0x00, 0xE7, 0x00, 0x70, 0xAF, 0x00,
    0xBA, 0x60, 0xFD, 0x08, 0x00, 0xDC, 0xFE, 0x2A, 0x00, 0x00, 0xFA, 0x18, 0x00, 0x00, 0x00, 0xF7,
    0x02, 0x00, 0xA2, 0x03, 0xE0, 0x8D, 0x96, 0xDF, 0x02, 0x10, 0xD9, 0xCF, 0x07, 0x00, 0x00, 0x00,
    0x90, 0xFE, 0x3D, 0x00, 0x00, 0xEA, 0x57, 0x17, 0x00, 0x00, 0x5F, 0x00, 0x00, 0x00, 0x20, 0x2F,
    0x00, 0x00, 0x40, 0x75, 0x8F, 0xB8, 0x5E, 0xE0, 0xFF, 0xEF, 0xAC, 0x28, 0x00, 0x20, 0x2F, 0x00,
    0x00, 0x00, 0x20, 0x2F, 0x00, 0x00, 0x00, 0x20, 0x3F, 0x00, 0x00, 0x00, 0x10, 0x3F, 0x00, 0x00,
    0x00, 0x10, 0x3F, 0x00, 0x00, 0x00, 0x10, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x2F, 0x00, 0x00, 0x00,
    0x50, 0x0F, 0x00, 0x00, 0x00, 0x80, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90,
    0xED, 0x49, 0x0C, 0x00, 0xEC, 0x77, 0xFD, 0x0D, 0x50, 0x2F, 0x00, 0xB0, 0x0C, 0xB0, 0x0A, 0x00,
    0x80, 0x0C, 0xE0, 0x07, 0x00, 0x80, 0x0D, 0xF0, 0x05, 0x00, 0x70, 0x0D, 0xD0, 0x08, 0x00, 0xB0,
    0x0E, 0x80, 0x3E, 0x40, 0xFB, 0x0E, 0x00, 0xFB, 0xFF, 0x7B, 0x0F, 0x00, 0x20, 0x14, 0x70, 0x0D,
    0x00, 0x00, 0x00, 0x90, 0x0C, 0x60, 0x01, 0x00, 0xE0, 0x07, 0xE0, 0x8E, 0x76, 0xED, 0x01, 0x10,
    0xD8, 0xEF, 0x1A, 0x00, 0xA6, 0x00, 0x00, 0x00, 0xD7, 0x00, 0x00, 0x00, 0xE6, 0x00, 0x00, 0x00,
    0xF5, 0x00, 0x00, 0x00, 0xF4, 0x20, 0xEB, 0x09, 0xF4, 0xF4, 0x7B, 0x5F, 0xF3, 0x9F, 0x00, 0xAA,
    0xF3, 0x0B, 0x00, 0xC8, 0xF3, 0x02, 0x00, 0xD7, 0xF4, 0x01, 0x00, 0xD7, 0xF4, 0x00, 0x00, 0xC8,
    0xF5, 0x00, 0x00, 0xB8, 0xF6, 0x00, 0x00, 0xA9, 0xC4, 0x00, 0x00, 0x9A, 0x00, 0x00, 0x00, 0x22,
    0x00, 0xB0, 0x0C, 0x00, 0x00, 0xF0, 0x0E, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC2, 0xFE, 0x0D, 0x00, 0x81, 0x87, 0x1F, 0x00, 0x00, 0x40, 0x0F, 0x00, 0x00, 0x50, 0x0F, 0x00,
    0x00, 0x60, 0x0E, 0x00, 0x00, 0x70, 0x0E, 0x00, 0x00, 0x70, 0x0D, 0x00, 0x00, 0x70, 0x0E, 0x00,
    0x51, 0xA6, 0x9F, 0x8A, 0xF7, 0xEF, 0xCD, 0x7B, 0x00, 0x00, 0xD1, 0x07, 0x00, 0x00, 0xF3, 0x0A,
    0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFB, 0xFF, 0x0C, 0x00, 0x64, 0x65, 0x4F,
    0x00, 0x00, 0x00, 0x6F, 0x00, 0x00, 0x00, 0x6E, 0x00, 0x00, 0x00, 0x7D, 0x00, 0x00, 0x00, 0x8D,
    0x00, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 0x9B, 0x00, 0x00, 0x00, 0x9B,
    0xF0, 0x03, 0x00, 0x7D, 0xC0, 0x0C, 0x20, 0x4F, 0x30, 0xAF, 0xC6, 0x0D, 0x00, 0xC4, 0xBF, 0x01,
    0xD3, 0x00, 0x00, 0x00, 0x00, 0xF4, 0x00, 0x00, 0x00, 0x00, 0xF3, 0x01, 0x00, 0x00, 0x00, 0xF3,
    0x01, 0x00, 0x00, 0x00, 0xF3, 0x02, 0x00, 0xD2, 0x02, 0xF2, 0x02, 0x10, 0xCE, 0x00, 0xF3, 0x02,
    0xD1, 0x1E, 0x00, 0xF3, 0x41, 0xDE, 0x02, 0x00, 0xF4, 0xF8, 0x1E, 0x00, 0x00, 0xF4, 0xBF, 0x6F,
    0x00, 0x00, 0xF5, 0x02, 0xF8, 0x05, 0x00, 0xE6, 0x00, 0x90, 0x3F, 0x00, 0xD8, 0x00, 0x00, 0xEB,
    0x02, 0xA6, 0x00, 0x00, 0xC0, 0x06, 0xA2, 0xEC, 0x4E, 0x00, 0x00, 0xA2, 0x68, 0x6F, 0x00, 0x00,
    0x00, 0x10, 0x4F, 0x00, 0x00, 0x00, 0x30, 0x1F, 0x00, 0x00, 0x00, 0x50, 0x0F, 0x00, 0x00, 0x00,
    0x70, 0x0E, 0x00, 0x00, 0x00, 0x70, 0x0D, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x00, 0x00, 0x00, 0x90,
    0x0B, 0x00, 0x00, 0x00, 0x90, 0x0B, 0x00, 0x00, 0x00, 0x80, 0x0C, 0x00, 0x01, 0x00, 0x50, 0x6F,
    0xB7, 0x5F, 0x00, 0x00, 0xFA, 0xAD, 0x04, 0xE1, 0x40, 0x03, 0x30, 0x00, 0xF3, 0xFC, 0x6F, 0xFE,
    0x0B, 0xF3, 0x2D, 0xFD, 0x4A, 0x3F, 0xF3, 0x02, 0xDA, 0x00, 0x6F, 0xF3, 0x01, 0xC9, 0x00, 0x8D,
    0xF3, 0x01, 0xC8, 0x00, 0x8C, 0xF3, 0x01, 0xC8, 0x00, 0x9C, 0xF3, 0x01, 0xD8, 0x00, 0x9C, 0xF3,
    0x01, 0xC8, 0x00, 0x8C, 0xE1, 0x00, 0x32, 0x00, 0x6A, 0xB5, 0x30, 0xEC, 0x08, 0xD7, 0xF3, 0x7A,
    0x5F, 0xD8, 0x9D, 0x00, 0xBA, 0xF8, 0x0D, 0x00, 0xD7, 0xF7, 0x05, 0x00, 0xE6, 0xE7, 0x00, 0x00,
    0xE7, 0xE7, 0x00, 0x00, 0xE7, 0xE6, 0x00, 0x00, 0xD8, 0xE6, 0x00, 0x00, 0xC9, 0xC4, 0x00, 0x00,
    0x97, 0x00, 0xC5, 0xCF, 0x03, 0x00, 0x70, 0xAF, 0xB6, 0x3F, 0x00, 0xF2, 0x06, 0x00, 0xBB, 0x00,
    0xD8, 0x00, 0x00, 0xF5, 0x00, 0x9B, 0x00, 0x00, 0xF2, 0x02, 0x7D, 0x00, 0x00, 0xF2, 0x02, 0x9B,
    0x00, 0x00, 0xF5, 0x00, 0xE8, 0x00, 0x00, 0xBC, 0x00, 0xE1, 0x6C, 0xC6, 0x2E, 0x00, 0x20, 0xEB,
    0xAE, 0x02, 0x00, 0x63, 0x00, 0x00, 0x00, 0x00, 0xD7, 0xB2, 0xBE, 0x02, 0x00, 0xF6, 0xCF, 0xC6,
    0x1E, 0x00, 0xF5, 0x08, 0x00, 0x9D, 0x00, 0xF4, 0x00, 0x00, 0xF7, 0x00, 0xF4, 0x00, 0x00, 0xF3,
    0x01, 0xF4, 0x01, 0x00, 0xF2, 0x02, 0xF4, 0x01, 0x00, 0xF4, 0x00, 0xF4, 0x00, 0x00, 0xCB, 0x00,
    0xF5, 0x6A, 0xC6, 0x3F, 0x00, 0xF5, 0xEB, 0xBE, 0x02, 0x00, 0xE6, 0x00, 0x00, 0x00, 0x00, 0xE7,
    0x00, 0x00, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x00, 0x00, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC5,
    0xCF, 0x06, 0x70, 0xAF, 0x96, 0xAF, 0xF2, 0x07, 0x00, 0xC9, 0xD9, 0x00, 0x00, 0xB9, 0x8C, 0x00,
    0x00, 0xBA, 0x6E, 0x00, 0x00, 0xBA, 0x9C, 0x00, 0x00, 0xAA, 0xE7, 0x01, 0x00, 0xAB, 0xD0, 0x7D,
    0xC6, 0xAF, 0x10, 0xEA, 0xAE, 0xAC, 0x00, 0x00, 0x00, 0xB9, 0x00, 0x00, 0x00, 0xB9, 0x00, 0x00,
    0x00, 0xC8, 0x00, 0x00, 0x00, 0xA6, 0xA6, 0x00, 0xE8, 0x7E, 0x00, 0xF5, 0xB1, 0x8E, 0xEA, 0x00,
    0xF0, 0xCD, 0x01, 0xF4, 0x01, 0xE0, 0x2F, 0x00, 0xC1, 0x01, 0xC0, 0x0B, 0x00, 0x00, 0x00, 0xC0,
    0x08, 0x00, 0x00, 0x00, 0xD0, 0x08, 0x00, 0x00, 0x00, 0xD0, 0x07, 0x00, 0x00, 0x00, 0xF0, 0x06,
    0x00, 0x00, 0x00, 0xD0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x60, 0xEC, 0xBE, 0x01, 0x00, 0xFB, 0x69,
    0xE6, 0x08, 0x30, 0x3F, 0x00, 0xB0, 0x09, 0x50, 0x0F, 0x00, 0x40, 0x03, 0x10, 0xCE, 0x47, 0x00,
    0x00, 0x00, 0xA2, 0xFE, 0xBF, 0x01, 0x00, 0x00, 0x20, 0xD5, 0x0C, 0x70, 0x03, 0x00, 0x70, 0x0E,
    0xB0, 0xAF, 0x66, 0xFA, 0x09, 0x00, 0xB5, 0xFE, 0x7D, 0x00, 0x00, 0x70, 0x0A, 0x00, 0x00, 0x00,
    0xA0, 0x0B, 0x00, 0x00, 0xE5, 0xEC, 0xAD, 0xDB, 0x0E, 0x71, 0xFA, 0xCE, 0x8B, 0x05, 0x00, 0xE0,
    0x07, 0x00, 0x00, 0x00, 0xE0, 0x06, 0x00, 0x00, 0x00, 0xF0, 0x06, 0x00, 0x00, 0x00, 0xF0, 0x05,
    0x00, 0x00, 0x00, 0xF0, 0x05, 0x00, 0x00, 0x00, 0xE0, 0x06, 0x00, 0x00, 0x00, 0x90, 0x5D, 0xC7,
    0x0E, 0x00, 0x10, 0xFB, 0xAD, 0x04, 0xC0, 0x04, 0x00, 0x96, 0x00, 0xF0, 0x05, 0x00, 0xB9, 0x00,
    0xF3, 0x02, 0x00, 0xAA, 0x00, 0xF5, 0x00, 0x00, 0xAA, 0x00, 0xE6, 0x00, 0x00, 0xAB, 0x00, 0xD7,
    0x00, 0x00, 0x9B, 0x00, 0xD7, 0x00, 0x00, 0x9B, 0x00, 0xF5, 0x00, 0x00, 0xAC, 0x00, 0xF1, 0x5A,
    0xE8, 0xEF, 0x00, 0x40, 0xFD, 0x6C, 0xF2, 0x05, 0x00, 0x00, 0x00, 0x10, 0x00, 0x80, 0x01, 0x00,
    0x10, 0x2D, 0xE0, 0x07, 0x00, 0x60, 0x1F, 0x80, 0x0E, 0x00, 0xB0, 0x0B, 0x20, 0x5F, 0x00, 0xF1,
    0x05, 0x00, 0xCB, 0x00, 0xF7, 0x00, 0x00, 0xF3, 0x03, 0x9D, 0x00, 0x00, 0xC0, 0x4B, 0x3F, 0x00,
    0x00, 0x40, 0xDF, 0x0C, 0x00, 0x00, 0x00, 0xFC, 0x04, 0x00, 0x00, 0x00, 0xD3, 0x00, 0x00, 0x6A,
    0x00, 0x00, 0x00, 0x71, 0x00, 0xAB, 0x00, 0x21, 0x00, 0xF5, 0x00, 0xC8, 0x00, 0xF8, 0x00, 0xC8,
    0x00, 0xF5, 0x00, 0xFD, 0x04, 0x9C, 0x00, 0xF2, 0x13, 0xDF, 0x08, 0x5F, 0x00, 0xE0, 0x67, 0x7D,
    0x4C, 0x2F, 0x00, 0xA0, 0xBB, 0x38, 0xAF, 0x0D, 0x00, 0x60, 0xFF, 0x03, 0xFF, 0x08, 0x00, 0x10,
    0xDF, 0x00, 0xFC, 0x02, 0x00, 0x00, 0x6A, 0x00, 0xA7, 0x00, 0x00, 0x70, 0x02, 0x00, 0x10, 0x3D,
    0xC0, 0x2E, 0x00, 0xB0, 0x1E, 0x10, 0xEC, 0x01, 0xF7, 0x04, 0x00, 0xE1, 0x6B, 0x6F, 0x00, 0x00,
    0x30, 0xFF, 0x08, 0x00, 0x00, 0x60, 0xFF, 0x03, 0x00, 0x00, 0xF5, 0xB8, 0x1E, 0x00, 0x20, 0x9F,
    0x00, 0xDD, 0x00, 0xD0, 0x0C, 0x00, 0xE2, 0x0C, 0xD3, 0x01, 0x00, 0x20, 0x2E, 0xD3, 0x00, 0x00,
    0x00, 0x79, 0xF1, 0x08, 0x00, 0x10, 0x6F, 0x70, 0x1F, 0x00, 0x60, 0x0F, 0x00, 0x8E, 0x00, 0xC0,
    0x0A, 0x00, 0xF7, 0x00, 0xF3, 0x04, 0x00, 0xF1, 0x06, 0xDA, 0x00, 0x00, 0x90, 0x2D, 0x5F, 0x00,
    0x00, 0x20, 0xDF, 0x0D, 0x00, 0x00, 0x00, 0xFB, 0x05, 0x00, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00,
    0x60, 0x3F, 0x00, 0x00, 0x00, 0xF2, 0x08, 0x00, 0x00, 0x00, 0xCD, 0x00, 0x00, 0x00, 0x10, 0x2D,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xEF, 0xED, 0xFE, 0x0D, 0x10, 0x75, 0x67,
    0xFB, 0x08, 0x00, 0x00, 0x20, 0xBF, 0x00, 0x00, 0x00, 0xD0, 0x1E, 0x00, 0x00, 0x00, 0xFA, 0x03,
    0x00, 0x00, 0x60, 0x7F, 0x00, 0x00, 0x00, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0xDD, 0x00, 0x00, 0x00,
    0xA0, 0x8F, 0x65, 0x87, 0x1A, 0xE0, 0xFF, 0xFF, 0xCE, 0x1A, 0x00, 0x00, 0xB5, 0x1E, 0x00, 0x00,
    0x90, 0xCF, 0x06, 0x00, 0x00, 0xF3, 0x05, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0xF4,
    0x01, 0x00, 0x00, 0x00, 0xF1, 0x04, 0x00, 0x00, 0x00, 0xE0, 0x06, 0x00, 0x00, 0x00, 0xE0, 0x05,
    0x00, 0x00, 0x70, 0xED, 0x01, 0x00, 0x00, 0xF3, 0x3F, 0x00, 0x00, 0x00, 0x20, 0xEB, 0x00, 0x00,
    0x00, 0x00, 0xF2, 0x03, 0x00, 0x00, 0x00, 0xF2, 0x03, 0x00, 0x00, 0x00, 0xF2, 0x02, 0x00, 0x00,
    0x00, 0xF3, 0x01, 0x00, 0x00, 0x00, 0xF3, 0x02, 0x00, 0x00, 0x00, 0xE0, 0x5B, 0x97, 0x00, 0x00,
    0x40, 0xFD, 0x9C, 0x00, 0x90, 0x07, 0xC0, 0x08, 0xD0, 0x08, 0xD0, 0x07, 0xE0, 0x07, 0xE0, 0x06,
    0xF0, 0x06, 0xF0, 0x05, 0xF0, 0x05, 0xF0, 0x05, 0xF0, 0x05, 0xF0, 0x04, 0xF0, 0x04, 0xF0, 0x04,
    0xF0, 0x04, 0xF0, 0x04, 0xF0, 0x04, 0xD0, 0x03, 0xD8, 0xEF, 0x05, 0x00, 0x86, 0xA6, 0x1F, 0x00,
    0x00, 0x00, 0x4F, 0x00, 0x00, 0x00, 0x5F, 0x00, 0x00, 0x00, 0x4F, 0x00, 0x00, 0x20, 0x3F, 0x00,
    0x00, 0x40, 0x1F, 0x00, 0x00, 0x30, 0x2F, 0x00, 0x00, 0x00, 0xFB, 0x7D, 0x00, 0x00, 0xE1, 0x6E,
    0x00, 0x00, 0xBB, 0x00, 0x00, 0x00, 0x6E, 0x00, 0x00, 0x00, 0x6F, 0x00, 0x00, 0x00, 0x6E, 0x00,
    0x00, 0x00, 0x6E, 0x00, 0x00, 0x10, 0x5F, 0x00, 0x60, 0xE8, 0x0E, 0x00, 0xF3, 0x9D, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xE8, 0x0B, 0x00, 0x7C, 0x60, 0x7F, 0x7E, 0x00, 0x6E, 0xC0,
    0x09, 0xF7, 0x11, 0x4F, 0xF0, 0x05, 0xE0, 0xAB, 0x0E, 0xF1, 0x02, 0x40, 0xDE, 0x04, 0x10, 0x00,
    0x00, 0x00, 0x00,
};
const GFXglyph ComicCodeGlyphs[] = {
    { 0, 0, 10, 0, 0, 0, 0 }, //  
    { 4, 12, 10, 3, 12, 24, 0 }, // !
    { 6, 7, 10, 2, 13, 21, 24 }, // "
    { 10, 13, 10, 0, 12, 65, 45 }, // #
    { 10, 16, 10, 0, 14, 80, 110 }, // $
    { 11, 12, 10, 0, 12, 72, 190 }, // %
    { 10, 13, 10, 0, 12, 65, 262 }, // &
    { 2, 6, 10, 4, 12, 6, 327 }, // '
    { 6, 18, 10, 3, 14, 54, 333 }, // (
    { 6, 18, 10, 2, 14, 54, 387 }, // )
    { 8, 8, 10, 1, 13, 32, 441 }, // *
    { 9, 10, 10, 1, 11, 50, 473 }, // +
    { 5, 7, 10, 2, 3, 21, 523 }, // ,
    { 8, 3, 10, 1, 7, 12, 544 }, // -
    { 4, 4, 10, 3, 4, 8, 556 }, // .
    { 10, 18, 10, 0, 14, 90, 564 }, // /
    { 9, 12, 10, 1, 12, 60, 654 }, // 0
    { 10, 13, 10, 0, 12, 65, 714 }, // 1
    { 10, 12, 10, 0, 12, 60, 779 }, // 2
    { 8, 12, 10, 1, 12, 48, 839 }, // 3
    { 10, 12, 10, 0, 12, 60, 887 }, // 4
    { 9, 13, 10, 1, 13, 65, 947 }, // 5
    { 9, 12, 10, 1, 12, 60, 1012 }, // 6
    { 10, 12, 10, 0, 12, 60, 1072 }, // 7
    { 9, 12, 10, 1, 12, 60, 1132 }, // 8
    { 9, 12, 10, 1, 12, 60, 1192 }, // 9
    { 4, 11, 10, 3, 11, 22, 1252 }, // :
    { 5, 14, 10, 2, 10, 42, 1274 }, // ;
    { 8, 9, 10, 1, 11, 36, 1316 }, // <
    { 9, 6, 10, 1, 9, 30, 1352 }, // =
    { 9, 9, 10, 1, 11, 45, 1382 }, // >
    { 8, 12, 10, 1, 12, 48, 1427 }, // ?
    { 10, 16, 10, 0, 13, 80, 1475 }, // @
    { 10, 12, 10, 0, 12, 60, 1555 }, // A
    { 9, 13, 10, 1, 12, 65, 1615 }, // B
    { 10, 13, 10, 0, 13, 65, 1680 }, // C
    { 10, 12, 10, 0, 12, 60, 1745 }, // D
    { 9, 12, 10, 1, 12, 60, 1805 }, // E
    { 9, 12, 10, 1, 12, 60, 1865 }, // F
    { 10, 12, 10, 0, 12, 60, 1925 }, // G
    { 10, 12, 10, 0, 12, 60, 1985 }, // H
    { 8, 13, 10, 1, 12, 52, 2045 }, // I
    { 9, 13, 10, 1, 12, 65, 2097 }, // J
    { 9, 12, 10, 1, 12, 60, 2162 }, // K
    { 9, 12, 10, 1, 12, 60, 2222 }, // L
    { 11, 12, 10, 0, 12, 72, 2282 }, // M
    { 9, 12, 10, 1, 12, 60, 2354 }, // N
    { 10, 12, 10, 0, 12, 60, 2414 }, // O
    { 9, 12, 10, 1, 12, 60, 2474 }, // P
    { 11, 15, 10, 0, 12, 90, 2534 }, // Q
    { 9, 13, 10, 1, 12, 65, 2624 }, // R
    { 10, 12, 10, 0, 12, 60, 2689 }, // S
    { 10, 12, 10, 0, 12, 60, 2749 }, // T
    { 10, 12, 10, 0, 12, 60, 2809 }, // U
    { 10, 13, 10, 0, 13, 65, 2869 }, // V
    { 11, 12, 10, 0, 12, 72, 2934 }, // W
    { 10, 12, 10, 0, 12, 60, 3006 }, // X
    { 10, 12, 10, 0, 12, 60, 3066 }, // Y
    { 10, 13, 10, 0, 13, 65, 3126 }, // Z
    { 6, 18, 10, 3, 14, 54, 3191 }, // [
    { 10, 18, 10, 0, 14, 90, 3245 }, // <backslash>
    { 7, 18, 10, 1, 14, 72, 3335 }, // ]
    { 10, 8, 10, 0, 13, 40, 3407 }, // ^
    { 10, 2, 10, 0, -2, 10, 3447 }, // _
    { 6, 4, 10, 2, 14, 12, 3457 }, // `
    { 9, 11, 10, 1, 10, 55, 3469 }, // a
    { 9, 15, 10, 1, 14, 75, 3524 }, // b
    { 9, 10, 10, 1, 10, 50, 3599 }, // c
    { 9, 15, 10, 1, 14, 75, 3649 }, // d
    { 9, 10, 10, 1, 10, 50, 3724 }, // e
    { 10, 16, 10, 0, 14, 80, 3774 }, // f
    { 9, 14, 10, 0, 10, 70, 3854 }, // g
    { 8, 15, 10, 1, 14, 60, 3924 }, // h
    { 8, 14, 10, 1, 14, 56, 3984 }, // i
    { 8, 18, 10, 0, 14, 72, 4040 }, // j
    { 9, 14, 10, 1, 14, 70, 4112 }, // k
    { 10, 13, 10, 0, 13, 65, 4182 }, // l
    { 10, 10, 10, 0, 10, 50, 4247 }, // m
    { 8, 10, 10, 1, 10, 40, 4297 }, // n
    { 9, 10, 10, 1, 10, 50, 4337 }, // o
    { 9, 15, 10, 1, 11, 75, 4387 }, // p
    { 8, 14, 10, 1, 10, 56, 4462 }, // q
    { 9, 10, 10, 1, 10, 50, 4518 }, // r
    { 9, 10, 10, 0, 10, 50, 4568 }, // s
    { 10, 12, 10, 0, 12, 60, 4618 }, // t
    { 9, 11, 10, 1, 10, 55, 4678 }, // u
    { 10, 10, 10, 0, 10, 50, 4733 }, // v
    { 11, 10, 10, 0, 10, 60, 4783 }, // w
    { 10, 10, 10, 0, 10, 50, 4843 }, // x
    { 10, 14, 10, 0, 10, 70, 4893 }, // y
    { 10, 11, 10, 0, 11, 55, 4963 }, // z
    { 9, 18, 10, 1, 14, 90, 5018 }, // {
    { 3, 18, 10, 3, 14, 36, 5108 }, // |
    { 8, 18, 10, 1, 14, 72, 5144 }, // }
    { 10, 7, 10, 0, 9, 35, 5216 }, // ~
};
const UnicodeInterval ComicCodeIntervals[] = {
    { 0x20, 0x7E, 0x0 },
};
const GFXfont ComicCode = {
    (uint8_t*)ComicCodeBitmaps,
    (GFXglyph*)ComicCodeGlyphs,
    (UnicodeInterval*)ComicCodeIntervals,
    1,
    0,
    20,
    14,
    -4,
};
