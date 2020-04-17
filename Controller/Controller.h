#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Model/Snake.h"
#include "Model/Food.h"
#include "Model/Wall.h"
#include <vector>
#include <algorithm>

/*
    Controller should controll all the models.
*/
class Controller {
    private:
        std::vector<Snake*> snakes;
        std::vector<Food*> foods;
        std::vector<Wall*> walls;
    
    public:
        void CreateSnakes();
        bool IsHitSnake(const SnakeBody *sb);
        bool IsHitFood(const SnakeBody *sb);
        bool IsHitWall(const SnakeBody *sb);
        
        std::vector<Snake*> GetSnakes();
};

#endif //CONTROLLER_H
