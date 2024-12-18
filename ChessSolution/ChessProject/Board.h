#pragma once
#include <iostream>
#include <string>

#define CHESS_BOARD_SIZE 64

class Board
{
public:


private:
	std::string _code;
	Square squares[CHESS_BOARD_SIZE];
};