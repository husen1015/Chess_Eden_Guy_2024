#include "Board.h"

Board::Board()
{
	this->_code = "################################################################0";
	
	for (int i = 0; i < CHESS_BOARD_SIZE; i++)
	{
		Square newSquare(true, "1");
		this->_squares.push_back(newSquare);
}


std::string Board::calcPlaceByNumber(const int numPlace)
{

	return std::string();
}

void Board::initNormalBoard()
{
}
