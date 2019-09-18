#include "task2.h"

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 204 /*G*/, 0 /*B*/, 0xFF /*A*/);

    SDL_RenderDrawLine(gRenderer, 460, 120, 180, 120);

    SDL_SetRenderDrawColor(gRenderer, 230 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 180, 120, 180, 360);

    SDL_SetRenderDrawColor(gRenderer, 250 /*R*/, 250 /*G*/, 0 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 180, 360, 460, 360);

    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 0 /*G*/, 230 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 460, 360, 460, 120);
}

