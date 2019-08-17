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


#include "breaker.h"



short Breaker_TopEnd(BreakerBall* target) {
  return target->Position->Y;
}
short Breaker_BottomEnd(BreakerBall* target) {
  return target->Position->Y + BREAKER_SIDE;
}

short Breaker_LeftEnd(BreakerBall* target) {
  return target->Position->X;
}

short Breaker_RightEnd(BreakerBall* target) {
  return target->Position->X + BREAKER_SIDE;
}

unsigned char Breaker_ResolveCollisionVertical(BreakerBall* target, short start, short end) {
  unsigned short result = 0;
  if ((Breaker_LeftEnd(target) >= start) & (Breaker_LeftEnd(target) <= end)) {
    result = 1;
  }
  if ((Breaker_RightEnd(target) >= start) & (Breaker_RightEnd(target) <= end)) {
    result = result + 2;
  }
  return result;
}

unsigned char Breaker_ResolveCollisionHorizontal(BreakerBall* target, short start, short end) {
  unsigned short result = 0;
  if ((Breaker_TopEnd(target) >= start) & (Breaker_TopEnd(target) <= end)) {
    result = 1;
  }
  if ((Breaker_BottomEnd(target) >= start) & (Breaker_BottomEnd(target) <= end)) {
    result = result + 2;
  }
  return result;
}

void Breaker_DrawBreaker(BreakerBall* target, u32 clrRec) {
  C2D_DrawRectangle(target->Position->X, target->Position->Y, 0, BREAKER_SIDE, BREAKER_SIDE, clrRec, clrRec, clrRec, clrRec);
}
