//
// Created by David T Laszlo on 2019. 09. 19..
//

#include "Project3.h"
void line(SDL_Renderer* gRenderer, int x, int y,int x2,int y2);

void draw(SDL_Renderer* gRenderer) {
    int x;
    int y;
    int x2;
    int y2;

    line(gRenderer, x, y,x2,y2);


}
void line(SDL_Renderer* gRenderer, int x, int y,int x2,int y2){
        for (int i = 0;i<301;i+= 20) {
            SDL_SetRenderDrawColor(gRenderer, 159+i, 234+i, 132+i, 0);
            SDL_RenderDrawLine(gRenderer, 300, 300 + i, 0 + i, 300);
            SDL_SetRenderDrawColor(gRenderer, 159+i, 234+i, 132+i, 0);
            SDL_RenderDrawLine(gRenderer, 300, 300 + i, 600 - i, 300);
            SDL_SetRenderDrawColor(gRenderer, 159+i, 234+i, 132+i, 0);
            SDL_RenderDrawLine(gRenderer, 300, 300-i , 0+i , 300);
            SDL_SetRenderDrawColor(gRenderer, 159+i, 234+i, 132+i, 0);
            SDL_RenderDrawLine(gRenderer, 300, 300-i , 600-i , 300);
        }
        }