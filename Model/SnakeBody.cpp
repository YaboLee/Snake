#include "SnakeBody.h"

SnakeBody::SnakeBody(int x, int y, Color color) {
    this->color = color;
    this->X = x;
    this->Y = y;
}

void SnakeBody::Move(Direction direct) {
    switch (direct)
    {
    case Direction::Up:
        this->Y--;
        break;
    case Direction::Down:
        this->Y++;
        break;
    case Direction::Left:
        this->X--;
        break;
    case Direction::Right:
        this->X++;
        break;
    default:
        break;
    }
}

int SnakeBody::GetX() { return this->X; }
int SnakeBody::GetY() { return this->Y; }
