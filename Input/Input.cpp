//
// Created by Jason Evans on 03/10/2025.
//

#include "Input.h"


Input::Input() {
    for (bool &key : keyStates) key = false;
}

void Input::HandleInput(const SDL_Event* event) {
    if (event->type == SDL_EVENT_KEY_DOWN || event->type == SDL_EVENT_KEY_UP) {
        bool isPressed = (event->type == SDL_EVENT_KEY_DOWN);

        switch (event->key.key) {
            case SDLK_W: keyStates[0] = isPressed; break;
            case SDLK_A: keyStates[1] = isPressed; break;
            case SDLK_S: keyStates[2] = isPressed; break;
            case SDLK_D: keyStates[3] = isPressed; break;
            default: break;
        }
    }
}

MoveDirection Input::GetMoveDirection() {
    if (keyStates[0]) return MOVE_UP;
    if (keyStates[1]) return MOVE_LEFT;
    if (keyStates[2]) return MOVE_DOWN;
    if (keyStates[3]) return MOVE_RIGHT;
    return MOVE_NONE;
}


Input::~Input() = default;

