#include "Snake.h"

Snake::Snake(int tail_X, int tail_Y, int length, Color color, Direction direct) {
    for (int i = 0; i < length; i++) {
        auto sb = new SnakeBody(tail_X-i, tail_Y, color);
        this->bodies.push(sb);
    }
    this->color = color;
    this->direction = direct;
}

SnakeBody Snake::Move() {
    auto sb = this->bodies.back();
    sb->Move(this->direction);
    this->bodies.push(sb);
    return *sb;
}

void Snake::SetDirection(Direction direct) {
    this->direction = direct;
}

void Snake::MoveComplete(bool eaten) {
    if (!eaten) {
        this->bodies.pop();
    }
}

unsigned int Snake::GetLength() { return this->bodies.size(); }
Color Snake::GetColor() { return this->color; }
SnakeBody Snake::GetHead() { return *this->bodies.back(); }
SnakeBody Snake::GetTail() { return *this->bodies.front(); }