#ifndef __I_DOOMDEV__
#define __I_DOOMDEV__

#include "doomtype.h"

void I_DoomDevRead(int idx);
void I_DoomDevAllocScreens(void);
void I_DoomDevFreeScreens(void);

void I_DoomDevPlotPixel(int scrn, int x, int y, byte color);
void I_DoomDevPlotPixelWu(int scrn, int x, int y, byte color, int weight);
void I_DoomDevDrawLine(fline_t* fl, int color);
void I_DoomDevDrawBackground(const char *flatname, int n);
void I_DoomDevCopyRect(int srcscrn, int destscrn, int x, int y, int width, int height, enum patch_translation_e flags);
void I_DoomDevFillRect(int scrn, int x, int y, int width, int height, byte colour);

#endif
