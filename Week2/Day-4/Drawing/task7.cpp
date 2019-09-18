//
// Created by David T Laszlo on 2019. 09. 18..
//

#include "task7.h"
void draw(SDL_Renderer* gRenderer) {
    int x = 20;
    for (int i = 30; i < 150; i += 30) {
            SDL_SetRenderDrawColor(gRenderer, 159 + i, 234 + i, 132 + i, 9 + i);
            SDL_Rect fillRect = {50 + i, 50 + i, i+2, i+5};
            SDL_RenderFillRect(gRenderer, &fillRect);
        }


}