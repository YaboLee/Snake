TEST_FILES := UnitTest/unittest.cpp
SNAKE_FILES := Model/Snake.cpp Model/SnakeBody.cpp Model/Square.cpp
MODEL_FILES := $(SNAKE_FILES)

CONTROLLER_FILES := Controller/Controller.cpp

test: $(MODEL_FILES) UnitTest/unittest.cpp
	g++ -std=c++17 -Wall -o test $(TEST_FILES) $(MODEL_FILES) $(CONTROLLER_FILES) && ./test