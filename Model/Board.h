#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Wall.h"
#include "Snake.h"
#include "Food.h"

class Board {
    private:
        std::vector<Wall> walls;
        std::vector<Snake> snakes;
        std::vector<Food> foods;

    public:
        Board();
};
#endif


