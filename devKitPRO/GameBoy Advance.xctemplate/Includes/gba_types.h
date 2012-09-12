//
//  gba_types.h
//  supudo.net GBA
//
//  Created by supudo on 8/29/06.
//  Copyright 2011 supudo.net. All rights reserved.
//

#ifndef GBA_TYPES_H

#define GBA_TYPES_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long un32;

typedef signed char s8;
typedef signed short s16;
typedef signed long sn32;

// Palette macro for RGB
#define RGB(r, g, b)   ((u16)(r | (g << 5) | (b << 10)))

#endif
