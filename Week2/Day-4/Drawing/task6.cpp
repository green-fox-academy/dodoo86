//
// Created by David T Laszlo on 2019. 09. 18..
//

#include "task6.h"
void draw(SDL_Renderer* gRenderer) {

    int x1 = 270;
    for (int i = 0; i < 200; i += 100) {
        SDL_SetRenderDrawColor(gRenderer, 255, 9, 9, 9);
        SDL_RenderDrawLine(gRenderer, x1, 190 + i, x1 + 100, 190 + i);
    }
    int y1 = 190;
    for (int y = 0; y < 200; y += 100) {
        SDL_SetRenderDrawColor(gRenderer, 255, 9, 9, 9);
        SDL_RenderDrawLine(gRenderer, 270 +y, y1, 270 +y, y1+100);
    }
}