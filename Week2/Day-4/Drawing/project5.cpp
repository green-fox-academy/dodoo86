//
// Created by David T Laszlo on 2019. 09. 20..
//

#include "project5.h"


void draw(SDL_Renderer* gRenderer){

    for (int i = 0; i < 280; i += 40) {


        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0);
        SDL_RenderDrawLine(gRenderer, 290, 400 - i, 310, 400 - i);
        SDL_RenderDrawLine(gRenderer, 290, 400 - i, 280, 420 - i);
        SDL_RenderDrawLine(gRenderer, 310, 400 - i, 320, 420 - i);
        SDL_RenderDrawLine(gRenderer, 280, 420 - i, 290, 440 - i);
        SDL_RenderDrawLine(gRenderer, 290, 440 - i, 310, 440 - i);
        SDL_RenderDrawLine(gRenderer, 310, 440 - i, 320, 420 - i);


        for (int a = 0; a < 240; a += 40) {
            int h = 30;
            int up = 20;


            SDL_RenderDrawLine(gRenderer, 290 + h, (360 - a) + up, 310 + h, (360 - a) + up);
            SDL_RenderDrawLine(gRenderer, 290 + h, (360 - a) + up, 280 + h, (380 - a) + up);
            SDL_RenderDrawLine(gRenderer, 310 + h, (360 - a) + up, 320 + h, (380 - a) + up);
            SDL_RenderDrawLine(gRenderer, 280 + h, (380 - a) + up, 290 + h, (400 - a) + up);
            SDL_RenderDrawLine(gRenderer, 290 + h, (400 - a) + up, 310 + h, (400 - a) + up);
            SDL_RenderDrawLine(gRenderer, 310 + h, (400 - a) + up, 320 + h, (380 - a) + up);


            SDL_RenderDrawLine(gRenderer, 290 - h, (360 - a) + up, 310 - h, (360 - a) + up);
            SDL_RenderDrawLine(gRenderer, 290 - h, (360 - a) + up, 280 - h, (380 - a) + up);
            SDL_RenderDrawLine(gRenderer, 310 - h, (360 - a) + up, 320 - h, (380 - a) + up);
            SDL_RenderDrawLine(gRenderer, 280 - h, (380 - a) + up, 290 - h, (400 - a) + up);
            SDL_RenderDrawLine(gRenderer, 290 - h, (400 - a) + up, 310 - h, (400 - a) + up);
            SDL_RenderDrawLine(gRenderer, 310 - h, (400 - a) + up, 320 - h, (380 - a) + up);

            for (int b = 0; b < 200; b += 40) {

                SDL_RenderDrawLine(gRenderer, 290 + h * 2, (320 - b) + up * 2, 310 + h * 2, (320 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 290 + h * 2, (320 - b) + up * 2, 280 + h * 2, (340 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 310 + h * 2, (320 - b) + up * 2, 320 + h * 2, (340 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 280 + h * 2, (340 - b) + up * 2, 290 + h * 2, (360 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 290 + h * 2, (360 - b) + up * 2, 310 + h * 2, (360 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 310 + h * 2, (360 - b) + up * 2, 320 + h * 2, (340 - b) + up * 2);

                SDL_RenderDrawLine(gRenderer, 290 - h * 2, (320 - b) + up * 2, 310 - h * 2, (320 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 290 - h * 2, (320 - b) + up * 2, 280 - h * 2, (340 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 310 - h * 2, (320 - b) + up * 2, 320 - h * 2, (340 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 280 - h * 2, (340 - b) + up * 2, 290 - h * 2, (360 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 290 - h * 2, (360 - b) + up * 2, 310 - h * 2, (360 - b) + up * 2);
                SDL_RenderDrawLine(gRenderer, 310 - h * 2, (360 - b) + up * 2, 320 - h * 2, (340 - b) + up * 2);

                for (int b = 0; b < 160; b += 40) {
                    SDL_RenderDrawLine(gRenderer, 290 + h * 3, (280 - b) + up * 3, 310 + h * 3, (280 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 290 + h * 3, (280 - b) + up * 3, 280 + h * 3, (300 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 310 + h * 3, (280 - b) + up * 3, 320 + h * 3, (300 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 280 + h * 3, (300 - b) + up * 3, 290 + h * 3, (320 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 290 + h * 3, (320 - b) + up * 3, 310 + h * 3, (320 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 310 + h * 3, (320 - b) + up * 3, 320 + h * 3, (300 - b) + up * 3);

                    SDL_RenderDrawLine(gRenderer, 290 - h * 3, (280 - b) + up * 3, 310 - h * 3, (280 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 290 - h * 3, (280 - b) + up * 3, 280 - h * 3, (300 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 310 - h * 3, (280 - b) + up * 3, 320 - h * 3, (300 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 280 - h * 3, (300 - b) + up * 3, 290 - h * 3, (320 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 290 - h * 3, (320 - b) + up * 3, 310 - h * 3, (320 - b) + up * 3);
                    SDL_RenderDrawLine(gRenderer, 310 - h * 3, (320 - b) + up * 3, 320 - h * 3, (300 - b) + up * 3);
                }

            }


        }
    }
}