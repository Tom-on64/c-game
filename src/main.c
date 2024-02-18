#include <SDL2/SDL.h>
#include "sdlstuff.h"
#include "game.h"

int main() {
    if (initSdl() != 0) return 1; // Error message handled by initSdl()

    SDL_Event event;
    int quit = 0;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) quit = 1;
        }

        gameLoop();
    }

    quitSdl();

    return 0;
}