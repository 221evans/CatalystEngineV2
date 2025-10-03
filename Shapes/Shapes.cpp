//
// Created by Jason Evans on 03/10/2025.
//

#include "Shapes.h"
#include <iostream>
Shapes::Shapes() {

}

void Shapes::DrawRectangle(SDL_Renderer* renderer, SDL_FRect* rect) const {

    SDL_SetRenderDrawColor(renderer,255,0,0,255);
    SDL_RenderFillRect(renderer,rect) ;
}

Shapes::~Shapes() {
}


