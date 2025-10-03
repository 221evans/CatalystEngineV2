//
// Created by Jason Evans on 03/10/2025.
//

#include "Input.h"


Input::Input() = default;

void Input::GetMoveDirection(const SDL_Event* event)
{
    // Left movement
    if (event->type == SDL_EVENT_KEY_DOWN) {
        if (event->key.key == SDLK_A) {
            moveDirection = MOVE_LEFT;
        }
    }

    // Right movement
    if (event->type == SDL_EVENT_KEY_DOWN) {
        if (event->key.key == SDLK_D) {
            moveDirection = MOVE_RIGHT;
        }
    }

    // Up movement
    if (event->type == SDL_EVENT_KEY_DOWN) {
        if (event->key.key == SDLK_W) {
            moveDirection = MOVE_UP;
        }
    }

    // Down movement
    if (event->type == SDL_EVENT_KEY_DOWN) {
        if (event->key.key == SDLK_S) {
            moveDirection = MOVE_DOWN;
        }
    }
}

Input::~Input() = default;

