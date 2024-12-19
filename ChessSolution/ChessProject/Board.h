#pragma once
#include <iostream>
#include <string>
#include "Square.h"

#define CHESS_BOARD_SIZE 64

class Square;

class Board
{
public:


private:
	std::string _code;
	Square squares[CHESS_BOARD_SIZE];
};