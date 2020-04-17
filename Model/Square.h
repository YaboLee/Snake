#ifndef SQUARE_H
#define SQUARE_H

class Square {
    private:
        int X;
        int Y;
    public:
        virtual int GetX() const;
        virtual int GetY() const;
};

#endif 