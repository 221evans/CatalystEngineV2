//
// Created by Jason Evans on 05/10/2025.
//

#include "Animation.h"

Animation::Animation() : totalFrames(0), frameDelay(0), frameCounter(0), frameIndex(0),frameWidth(64) {
}

void Animation::Animate(float deltaTime, SDL_FRect srcRect) {

    frameCounter += deltaTime;
    if (frameCounter >= frameDelay) {

        frameCounter -= frameDelay;
        frameIndex = (frameIndex + 1) % frameWidth;
        srcRect.x = static_cast<float>(frameIndex) *  static_cast<float>(frameWidth);
    }
}


Animation::~Animation() = default;

