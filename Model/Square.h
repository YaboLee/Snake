#ifndef SQUARE_H
#define SQUARE_H

#include <string>

class Square {
    private:
        int X;
        int Y;
    public:
        virtual int GetX() const;
        virtual int GetY() const;
        virtual std::string GetClassName() const;
};

#endif 