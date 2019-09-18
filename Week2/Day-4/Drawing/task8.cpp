//
// Created by David T Laszlo on 2019. 09. 18..
//

#include "task8.h"

void sqare(SDL_Renderer* gRenderer, int x, int y);
void draw(SDL_Renderer* gRenderer){
    int x = 100;
    int y = 100;

    sqare(gRenderer, x, y);

}
void sqare(SDL_Renderer* gRenderer, int x, int y){

    SDL_SetRenderDrawColor(gRenderer, 159 , 234 , 132 , 9 );
    SDL_Rect fillRect = {x , y , 50, 50};
    SDL_RenderFillRect(gRenderer, &fillRect);
}