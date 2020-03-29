#define CATCH_CONFIG_MAIN

#include "../Model/Snake.h"
#include "catch2/catch.hpp"

TEST_CASE( "Snake is initialized", "[Snake]" ) {
    Snake s = Snake(0, 0, 2, Color::Red);
    REQUIRE( s.GetLength() == 2 );
    REQUIRE( s.GetColor() == Color::Red );
    REQUIRE( s.GetHead().GetX() == 0 );
    REQUIRE( s.GetHead().GetY() == 0 );
    s.Move(Direction::Up);
    REQUIRE( s.GetHead().GetX() == 0 );
    REQUIRE( s.GetHead().GetY() == -1 );
}