//
// Created by David T Laszlo on 2019. 09. 19..
//

#include "project2.h"
void line(SDL_Renderer* gRenderer,int x);
void draw(SDL_Renderer* gRenderer){
    int x = 600;


    line(gRenderer, x);
    line(gRenderer, x);

}

void line(SDL_Renderer* gRenderer, int x) {
    int screenwidth= x/4;
    int small = screenwidth/29;
    for (int i = 0; i < screenwidth; i += small) {
        SDL_SetRenderDrawColor(gRenderer, 159, 234, 132, 0);
        SDL_RenderDrawLine(gRenderer, 0, 0 + i, small + i, screenwidth);
        SDL_SetRenderDrawColor(gRenderer, 89, 0, 179, 0);
        SDL_RenderDrawLine(gRenderer, 0 + i, 0, screenwidth, small + i);

    }
}