#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Square.h"

#define CHESS_BOARD_SIZE 64

class Square;

class Board
{
public:
	Board();

	void initNormalBoard(); // Initializes a normal chess board at the start of the game

	static std::string calcPlaceByNumber(const int numPlace);

private:
	std::string _code;
	std::vector<Square> _squares;
	std::vector<Piece> _pieces;
};