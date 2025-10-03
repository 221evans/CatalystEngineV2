//
// Created by Jason Evans on 03/10/2025.
//

#ifndef CATALYSTENGINEV2_SHAPES_H
#define CATALYSTENGINEV2_SHAPES_H
#include "SDL3/SDL.h"
#include <iostream>

class Shapes {
public:
    Shapes();
    const SDL_Rect *rect;
    Uint8 r;
    Uint8 g;
    Uint8 b;
    Uint8 a;
    void DrawRectangle(SDL_Renderer* renderer,SDL_FRect* rect) const;
    void test();
    ~Shapes();
};


#endif //CATALYSTENGINEV2_SHAPES_H