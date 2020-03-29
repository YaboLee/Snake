#ifndef WALL_H
#define WALL_H

#include "Square.h"
#include "Config.h"

class Wall : public Square {
    int X;
    int Y;
    Color color;
};

#endif 