#include "Board.h"

Board::Board()
{
	this->_code = "################################################################0";
	
	for (int i = 0; i < CHESS_BOARD_SIZE; i++)
	{
		Square newSquare(true, calcPlaceByNumber(i));
		this->_squares.push_back(newSquare);
	}
}

void Board::initNormalBoard()
{
}

std::string Board::calcPlaceByNumber(const int numPlace)
{
	std::string coloumn = "";
	std::string row = "";
	std::string place = "";

	coloumn = numPlace % 8 + 'a';
	row = '8' - (numPlace / 8);
	place = coloumn + row;

	return place;
}
