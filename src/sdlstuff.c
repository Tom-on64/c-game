#include <SDL2/SDL.h>
#include "sdlstuff.h"

int initSdl() {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_Log("\x1b[31mCouldn't Initialize SDL: %s", SDL_GetError());
        return 1;
    }

    window = SDL_CreateWindow(
        WINDOW_NAME,
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        WIDTH,
        HEIGHT,
        0);
    if (!window) {
        SDL_Log("\x1b[31mFailed While Creating Window: %s", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    renderer = SDL_CreateRenderer(window, -1, 0);
    if (renderer == NULL) {
        SDL_Log("\x1b[31mFailed While Creating Renderer: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    return 0;
}

void quitSdl() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
