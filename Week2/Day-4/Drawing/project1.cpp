//
// Created by David T Laszlo on 2019. 09. 19..
//

#include "project1.h"
void line(SDL_Renderer* gRenderer, int x, int y,int x2,int y2);
void draw(SDL_Renderer* gRenderer){
    int x;
    int y;
    int x2;
    int y2;

    line(gRenderer, x, y,x2,y2);

}

void line(SDL_Renderer* gRenderer, int x, int y,int x2,int y2) {
    for (int i = 0;i<600;i+= 20) {
        SDL_SetRenderDrawColor(gRenderer, 159, 234, 132, 0);
        SDL_RenderDrawLine(gRenderer, 0, 0+i, 20+i, 600);
        SDL_SetRenderDrawColor(gRenderer, 89, 0, 179, 0);
        SDL_RenderDrawLine(gRenderer, 0+i, 0, 600, 20+i);


    }

}