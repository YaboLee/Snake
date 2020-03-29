#include "Snake.h"

Snake::Snake(int X, int Y, int length, Color color) {
    for (int i = 0; i < length; i++) {
        auto sb = new SnakeBody(X-i, Y, color);
        this->bodies.push(sb);
    }
    this->color = color;
}

SnakeBody Snake::Move(Direction direct) {
    auto sb = this->bodies.front();
    this->bodies.pop();
    sb->Move(direct);
    this->bodies.push(sb);
    return *sb;
}

unsigned int Snake::GetLength() { return this->bodies.size(); }
Color Snake::GetColor() { return this->color; }
SnakeBody Snake::GetHead() { return *this->bodies.front(); }