#ifndef DRAW_H
#define DRAW_H

#include <SDL2/SDL.h>

// The time elapsed since last frame
extern float deltaTime;

// Clears the screen
void clear();

// Sets the drawing color
void setColor(const Uint8 r, const Uint8 g, const Uint8 b, const Uint8 a);

// Draws a line
void drawLine(const int x1, const int y1, const int x2, const int y2);

// Updates the current frame
void draw();

#endif
