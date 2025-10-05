//
// Created by Jason Evans on 05/10/2025.
//

#ifndef CATALYSTENGINEV2_ANIMATION_H
#define CATALYSTENGINEV2_ANIMATION_H
#include "SDL3/SDL.h"

class Animation {
public:
    Animation();
    int totalFrames;
    float frameDelay;
    float frameCounter;
    int frameIndex;
    int frameWidth;

    void Animate(float deltaTime, SDL_FRect srcRect);
    ~Animation();
};


#endif //CATALYSTENGINEV2_ANIMATION_H