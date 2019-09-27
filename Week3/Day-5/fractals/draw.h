#ifndef GFA_SDL2_DRAW_H
#define GFA_SDL2_DRAW_H

#include <SDL.h>

//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;

void draw(SDL_Renderer* gRenderer);

class FractalGenerator {
public:
    FractalGenerator(SDL_Renderer* gRenderer, int maxDepth);
    void draw(int x0, int y0, int xm, int ym);
    void drawFractal(int x0, int y0, int xm, int ym, int depth);

private:
    SDL_Renderer* _renderer;
    int maxDepth;
};

#endif //GFA_SDL2_DRAW_H
