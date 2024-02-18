#include <SDL2/SDL.h>
#include "sdlstuff.h"
#include "draw.h"

float deltaTime = 0.0f;

Uint32 lastTicks = 0;
void updateDt() {
    Uint32 ticks = SDL_GetTicks();
    deltaTime = (ticks - lastTicks) / 1000.0f;
    lastTicks = ticks;
}

void clear() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}

void setColor(const Uint8 r, const Uint8 g, const Uint8 b, const Uint8 a) {
    SDL_SetRenderDrawColor(renderer, r, g, b, a);
}

void drawLine(const int x1, const int y1, const int x2, const int y2) {
    SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
}

void draw() {
    updateDt();
    SDL_RenderPresent(renderer);
}
