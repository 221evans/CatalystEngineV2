//
// Created by Jason Evans on 03/10/2025.
//

#ifndef CATALYSTENGINEV2_INPUT_H
#define CATALYSTENGINEV2_INPUT_H
#include <SDL3/SDL.h>

typedef enum {
    MOVE_NONE,
    MOVE_RIGHT,
    MOVE_LEFT,
    MOVE_UP,
    MOVE_DOWN,
} MoveDirection;

class Input {
public:
    Input();
    MoveDirection moveDirection;
    MoveDirection HandleInput(const SDL_Event* event);
    ~Input();
private:
    bool keyStates[4]; // Tracking WASD (Expand when needed)
};


#endif //CATALYSTENGINEV2_INPUT_H