#include "Board.h"

Board::Board()
{
	bool isSquareWhite = true; // Initial value here is extremely important

	this->_code = "################################################################0"; // Empty board, white player starts
	
	for (int i = 0; i < CHESS_BOARD_SIZE; i++)
	{

		Square newSquare(true, calcPlaceByNumber(i));
		this->_squares.push_back(newSquare);
	}
}

void Board::initNormalBoard()
{
	this->_code = "rnbkqbnrpppppppp################################PPPPPPPPRNBKQBNR0";
	this->createPieces();
}

void Board::printBoard() const
{
	std::cout << "The board code (as we send to frontend): " << this->_code << std::endl;
}

void Board::createPieces()
{
	int i = 0;
	char currChar = ' ';

	for (i = 0; i < CHESS_BOARD_SIZE; i++)
	{
		currChar = this->_code[i];

		switch (currChar)
		{
		case 'r':
			Rook newRook(true);
			this->_pieces.push_back(newRook);
			break;

		default:
			std::cerr << "Error at Board::createPieces - invalid board code" << std::endl;
		}
	}
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
