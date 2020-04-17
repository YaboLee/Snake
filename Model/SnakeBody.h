#ifndef SNAKE_BODY_H
#define SNAKE_BODY_H

#include "Square.h"
#include "Config.h"

class SnakeBody : public Square {
    private:
        int X;
        int Y;
        Color color;

    public:
        SnakeBody(int x, int y, Color color);
        void SetColor(Color color);
        void Move(Direction direct);
        int GetX() const override;
        int GetY() const override;
};

#endif //SNAKE_BODY_H


