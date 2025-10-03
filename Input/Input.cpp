//
// Created by Jason Evans on 03/10/2025.
//

#include "Input.h"


Input::Input() = default;

void Input::HandleInput(const SDL_Event* event)
{
    if (event->type == SDL_EVENT_KEY_DOWN || event->type == SDL_EVENT_KEY_UP) {
        bool isPressed = (event->type == SDL_EVENT_KEY_DOWN);

        switch (event->key.key) {
            case SDLK_W:
                keyStates[0] = isPressed;
                break;
            case SDLK_A:
                keyStates[1] = isPressed;
                break;
            case SDLK_S:
                keyStates[2] = isPressed;
                break;
            case SDLK_D:
                keyStates[3] = isPressed;
                break;
        }

        if (keyStates[0]) {
            moveDirection = MOVE_UP;
        }
        if (keyStates[1]) {
            moveDirection = MOVE_LEFT;
        }
        if (keyStates[2]) {
            moveDirection = MOVE_DOWN;
        }
        if (keyStates[3]) {
            moveDirection = MOVE_RIGHT;
        }
    }
}

Input::~Input() = default;

