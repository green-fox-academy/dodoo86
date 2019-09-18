//
// Created by David T Laszlo on 2019. 09. 18..
//

#include "task4.h"

void center(SDL_Renderer* renderer, int xx, int xy);
void draw(SDL_Renderer* gRenderer){
    SDL_SetRenderDrawColor(gRenderer, 255,9,9,9);

    for (int i = 0 ; i < 3; ++i){
        center(gRenderer,i*8+ 50, i*50);
    }

}
void center(SDL_Renderer* renderer, int xx, int xy){
    SDL_RenderDrawLine(renderer, xx,xy,SCREEN_WIDTH/2,SCREEN_HEIGHT/2);
}