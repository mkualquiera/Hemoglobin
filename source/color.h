/*
Homebrew game for the Nintendo 3DS
Copyright (C) 2019  HueStudios

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef COLORS
#define COLORS


#include <citro2d.h>
#include <stdlib.h>

typedef struct Color Color;
struct Color {
  unsigned char r;
  unsigned char g;
  unsigned char b;
};
Color Color_FromHSV(unsigned char h,unsigned char s,unsigned char v);

u32* Color_GeneratePalete(unsigned char s, unsigned char v);

#endif
