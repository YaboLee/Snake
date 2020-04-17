#ifndef FOOD_H
#define FOOD_H
#include "Square.h"

class Food : public Square {
    private:
        int X;
        int Y;
    
    public:
        int GetX() const override;
        int GetY() const override;

};

#endif //FOOD_H


