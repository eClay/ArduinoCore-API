/*
 WCharacter.h - Character utility functions for Wiring & Arduino
 Copyright (c) 2010 Hernando Barragan.  All right reserved.
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#pragma once

#include <ctype.h>

// WCharacter.h prototypes
#define isAlphaNumeric(c)       (isalnum(c) ? true : false)
#define isAlpha(c)              (isalpha(c) ? true : false)
#define isAscii(c)              (isascii(c) ? true : false)
#define isWhitespace(c)         (isblank(c) ? true : false)
#define isControl(c)            (iscntrl(c) ? true : false)
#define isDigit(c)              (isdigit(c) ? true : false)
#define isGraph(c)              (isgraph(c) ? true : false)
#define isLowerCase(c)          (islower(c) ? true : false)
#define isPrintable(c)          (isprint(c) ? true : false)
#define isPunct(c)              (ispunct(c) ? true : false)
#define isSpace(c)              (isspace(c) ? true : false)
#define isUpperCase(c)          (isupper(c) ? true : false)
#define isHexadecimalDigit(c)   (isxdigit(c) ? true : false)

#define toAscii(c)              (toascii(c))
#define toLowerCase(c)          (tolower(c))
#define toUpperCase(c)          (toupper(c))
