//
// Created by David T Laszlo on 2019. 09. 18..
//

#include "task5.h"


void draw(SDL_Renderer* gRenderer){
    int x1 =  150;
    for(int i=0; i<300;i+=100) {
        SDL_SetRenderDrawColor(gRenderer, 255, 9, 9, 9);
        SDL_RenderDrawLine(gRenderer, x1, 120 + i, x1+50,120 +i);
    }
}