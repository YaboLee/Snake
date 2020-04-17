#define CATCH_CONFIG_MAIN

#include "../Model/Snake.h"
#include "catch2/catch.hpp"

TEST_CASE( "Snake is initialized", "[Snake]" ) {
    //  tail - (5,5) (4,5) (3,5) - head
    Snake s = Snake(5, 5, 3, Color::Red, Direction::Up);
    REQUIRE( s.GetLength() == 3 );
    REQUIRE( s.GetColor() == Color::Red );
    REQUIRE( s.GetHead().GetX() == 3 );
    REQUIRE( s.GetHead().GetY() == 5 );
    
}

TEST_CASE( "Snake movement", "[Snake]") {
    // UP
    //  (3,5) (4,5) (5,5)  ---- snake's tail
    Snake s = Snake(5, 5, 3, Color::Red, Direction::Up);
    s.Move();
    s.MoveComplete(false);
    //  (3,6) (3,5) (4,5)  ---- snake's tail
    REQUIRE( s.GetHead().GetX() == 3 );
    REQUIRE( s.GetHead().GetY() == 6 );
    REQUIRE( s.GetTail().GetX() == 4 );
    REQUIRE( s.GetTail().GetY() == 5 ); 

    // DOWN
    //  (3,5) (4,5) (5,5)  ---- snake's tail
    s = Snake(5, 5, 3, Color::Red, Direction::Down);
    s.Move();
    s.MoveComplete(false);
    //  (3,4) (3,5) (4,5)  ---- snake's tail
    REQUIRE( s.GetHead().GetX() == 3 );
    REQUIRE( s.GetHead().GetY() == 4 );
    REQUIRE( s.GetTail().GetX() == 4 );
    REQUIRE( s.GetTail().GetY() == 5 ); 

    // LEFT
    //  (3,5) (4,5) (5,5)  ---- snake's tail
    s = Snake(5, 5, 3, Color::Red, Direction::Left);
    s.Move();
    s.MoveComplete(false);
    //  (2,5) (3,5) (4,5)  ---- snake's tail
    REQUIRE( s.GetHead().GetX() == 2 );
    REQUIRE( s.GetHead().GetY() == 5 );
    REQUIRE( s.GetTail().GetX() == 4 );
    REQUIRE( s.GetTail().GetY() == 5 );

    // RIGHT
    //  (3,5) (4,5) (5,5)  ---- snake's tail
    s = Snake(5, 5, 3, Color::Red, Direction::Right);
    s.Move();
    s.MoveComplete(false);
    //  (4,5) (3,5) (4,5)  ---- snake's tail
    REQUIRE( s.GetHead().GetX() == 4 );
    REQUIRE( s.GetHead().GetY() == 5 );
    REQUIRE( s.GetTail().GetX() == 4 );
    REQUIRE( s.GetTail().GetY() == 5 );
}