#include "task3.h"

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 204 /*G*/, 0 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 0, 0, 640, 480);
    SDL_SetRenderDrawColor(gRenderer, 250 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 0, 480, 640, 0);

}


