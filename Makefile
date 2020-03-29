TEST_FILES := UnitTest/unittest.cpp
SNAKE_FILES := Model/Snake.cpp Model/SnakeBody.cpp
MODEL_FILES := $(SNAKE_FILES)

test: Model/Snake.cpp UnitTest/unittest.cpp
	g++ -std=c++11 -Wall -o test $(TEST_FILES) $(MODEL_FILES) && ./test