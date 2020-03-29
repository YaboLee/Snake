#ifndef CONFIG_H
#define CONFIG_H

enum class Color {
    Red,
    White,
    Green,
    Yellow,
};

enum class Direction {
    Up,
    Down,
    Left,
    Right,
    Kepp,
};

class Config {
    

    private:
        Color WallColor = Color::White;
        Color FoodColor = Color::Green;
    
    public:
        static Config & get() {
            static Config instance;
            return instance;
        }

        Color GetWallColor() const { return WallColor; }
        Color GetFoodColor() const { return FoodColor; }

};

#endif


