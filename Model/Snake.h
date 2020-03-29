#ifndef SNAKE_H
#define SNAKE_H

#include <queue>
#include "SnakeBody.h"
#include "Config.h"

class Snake {
    private:
        std::queue<SnakeBody*> bodies;
        Color color;
    
    public:
        Snake(int X, int Y, int length, Color color);
        Snake();
        SnakeBody Move(Direction direct);
        unsigned int GetLength();
        Color GetColor();
        SnakeBody GetHead();
};

#endif


