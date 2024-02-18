#ifndef SDLSTUFF_H
#define SDLSTUFF_H

#include <SDL2/SDL.h>

#define WINDOW_NAME "Test Game"
#define WIDTH 640
#define HEIGHT 360
#define CENTER_X WIDTH/2
#define CENTER_Y HEIGHT/2

SDL_Window* window;
SDL_Renderer* renderer;

int initSdl();
void quitSdl();

#endif