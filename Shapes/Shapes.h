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
    void DrawRedRectangle(SDL_Renderer* renderer,SDL_FRect* rect) const;
    void DrawBlueRectangle(SDL_Renderer* renderer, SDL_FRect* rect) const;
    void DrawGreenRectangle(SDL_Renderer* render, SDL_FRect* rect) const;
    ~Shapes();
};


#endif //CATALYSTENGINEV2_SHAPES_H