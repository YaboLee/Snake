#include "Controller.h"

void Controller::CreateSnakes() {
    for (int i = 0; i < 3; i++) {
        auto s = new Snake(5,5,3,Color::Red, Direction::Up);
        this->snakes.push_back(s);
    }
}

bool Controller::IsHitSnake(const SnakeBody *sb) {
    for (auto it = this->snakes.begin(); it < this->snakes.end(); it++) {
        if ( (*it)->HasBody(sb) ) {
            return true;
        }
    }
    return false;
}

bool Controller::IsHitFood(const SnakeBody *sb) {
    return 
        std::find_if(this->foods.begin(), this->foods.end(),
            [&sb](const Food* it) { return sb->GetX() == it->GetX() && sb->GetY() == it->GetY(); }
            ) != this->foods.end();
}

bool Controller::IsHitWall(const SnakeBody* sb) {
    return 
        std::find_if(this->walls.begin(), this->walls.end(), 
            [&sb](const Wall* it) { return sb->GetX() == it->GetX() && sb->GetY() == it->GetY(); }
            ) != this->walls.end();
}

std::vector<Snake*> Controller::GetSnakes() { return this->snakes; }