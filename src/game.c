#include <math.h>
#include "game.h"
#include "draw.h"
#include "sdlstuff.h"
#include "types.h"

v2 pos = { CENTER_X, CENTER_Y };

i32 speed = 100;

u8 radius = 15;

void gameLoop() {
    // Draw
    clear();
    setColor(0, 255, 0, 255);
    for (i32 a = 0; a < 360; a += 1) {
        f32 ar = DEG2RAD(a);
        drawLine(pos.x, pos.y, pos.x + cos(ar)*radius, pos.y + sin(ar)*radius);
    }
    draw();

    // Update
    if (isKeyDown('w')) pos.y -= speed * deltaTime;
    if (isKeyDown('a')) pos.x -= speed * deltaTime;
    if (isKeyDown('s')) pos.y += speed * deltaTime;
    if (isKeyDown('d')) pos.x += speed * deltaTime;
}
