TEST_FILES := UnitTest/unittest.cpp
SNAKE_FILES := Model/Snake.cpp Model/SnakeBody.cpp Model/Square.cpp
MODEL_FILES := $(SNAKE_FILES)

test: $(MODEL_FILES) UnitTest/unittest.cpp
	g++ -std=c++11 -Wall -o test $(TEST_FILES) $(MODEL_FILES) && ./test