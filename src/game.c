#include <math.h>
#include "game.h"
#include "draw.h"
#include "sdlstuff.h"

float a = 0.0f;

void gameLoop() {
    clear();

    setColor(255, 255, 255, 255);
    drawLine(CENTER_X, CENTER_Y, CENTER_X + cos(a)*100, CENTER_Y + sin(a)*100);

    draw();

    a += deltaTime;
}
