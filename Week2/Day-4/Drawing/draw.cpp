 #include "draw.h"

 void draw(SDL_Renderer* gRenderer) {

     SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 204 /*G*/, 0 /*B*/, 0xFF /*A*/);

     SDL_RenderDrawLine(gRenderer, 320, 120, 320, 360);

     SDL_SetRenderDrawColor(gRenderer, 230 /*R*/, 0 /*G*/, 0 /*B*/, 0xFF /*A*/);
     SDL_RenderDrawLine(gRenderer, 160, 240, 480, 240);
     SDL_Delay(1000);

}
