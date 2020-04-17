#ifndef SNAKE_H
#define SNAKE_H

#include <queue>
#include "SnakeBody.h"
#include "Config.h"

class Snake {
    private:
        std::queue<SnakeBody*> bodies;
        Color color;
        Direction direction;
    
    public:
        Snake(int head_X, int head_Y, int length, Color color, Direction direct);
        Snake();
        SnakeBody Move();
        void MoveComplete(bool eaten);
        void SetDirection(Direction direct);
        Direction GetDirection();
        unsigned int GetLength();
        Color GetColor();
        // The head of the queue is the tail of the snake.
        // The tail of the queue is the head of the snake.
        // This method gets the head of the snake.
        SnakeBody GetHead();
        // This method gets the tail of the snake.
        SnakeBody GetTail();
};

#endif


