#include "Board.h"

Board::Board()
{
	this->_code = "################################################################0"; // Empty board, white player starts
}

void Board::initNormalBoard()
{
	this->_code = "r##############################################################R0";
}

void Board::printBoard() const
{
	std::cout << "The board code (as we send to frontend): " << this->_code << std::endl;
}



std::string Board::getCode()
{
	return this->_code;
}

bool Board::SetBoard(const std::string newBoard)
{
	if (tryToMove(newBoard))
	{
		_code = newBoard;
		//Change pieces
		std::cout << "ALL GOOD! - SetBoard" << std::endl;
		return true;
	}
	
	std::cout << "NOPE. - SetBoard" << std::endl;
	return false;
}

bool Board::tryToMove(const std::string moveCode)
{

	if (checkMoveIsValid(moveCode) == true)
	{
		//YO YO BRO? WHAT IS UP
		return true;
	}
	return false;
}






// Helper methods

char Board::getPieceByIndex(const int index) const
{
	return this->_code[index];
}

char Board::getPieceByPlace(const std::string place) const
{
	return this->_code[calcIndexByPlace(place)];
}

Piece* Board::getPieceByTypeAndIsWhite(const std::string type, const bool isWhite) const
{
	int i = 0;
	Piece* piece = nullptr;

	for (i = 0; i < CHESS_BOARD_SIZE; i++)
	{
		piece = this->_pieces[i];
		if (piece->getPieceType() == type && piece->getIsWhite() == isWhite)
		{
			return piece;
		}
	}
	return nullptr;
}


// Static helper functions

std::string Board::calcPlaceByIndex(const int index)
{
	std::string coloumn = "";
	std::string row = "";
	std::string place = "";

	coloumn = index % CHESS_BOARD_SIZE + 'a';
	row = '8' - (index / CHESS_BOARD_SIZE);
	place = coloumn + row;

	return place;
}

int Board::calcIndexByPlace(const std::string place)
{
	int coloumn = 0;
	int row = 0;
	int index = 0;

	coloumn = place.at(0) - 'a';
	row = place.at(1) - '8';
	index = row * CHESS_BOARD_SIZE + coloumn;

	return index;
}

char Board::getPieceByIndex(std::string boardCode, const int index)
{
	return boardCode[index];
}

char Board::getPieceByPlace(const std::string boardCode, const std::string place)
{
	return boardCode[calcIndexByPlace(place)];
}