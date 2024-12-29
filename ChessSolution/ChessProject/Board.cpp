#include "Board.h"
#include "Manager.h"

Board::Board()
{
	this->_board = "################################################################0"; // Empty board, white player starts
}

Board::~Board()
{
}

void Board::initNormalBoard()
{
	this->_board = "r##############################################################R0";
}

void Board::printBoard() const
{
	std::cout << "The board code (as we send to frontend): " << this->_board << std::endl;
}



std::string Board::getCode()
{
	return this->_board;
}

bool Board::SetBoard(const std::string newBoard)
{
	if (tryToMove(newBoard))
	{
        _board = newBoard;
		//Change pieces
		std::cout << "ALL GOOD! - SetBoard" << std::endl;
		return true;
	}
	
	std::cout << "NOPE. - SetBoard" << std::endl;
	return false;
}

bool Board::tryToMove(const std::string moveCode)
{
	std::string src = moveCode.substr(0, 2);
	std::string dst = moveCode.substr(2, 2);

	char movingPieceType = this->getPieceByPlace(src);
	int index = Manager::createPieceByType(movingPieceType, src, _pieces);

	if (_pieces[index]->checkMoveValidaty(dst, this->getCode()))
	{
		this->_board[getIndexByPlace(dst)] = this->_board[getIndexByPlace(src)]; // Moving the piece in the boardCode to the destination
		this->_board[getIndexByPlace(src)] = '#'; // Removing the piece now that it is in its new location
		return true;
	}
	_pieces.clear();

	return false;
}






// Helper methods

char Board::getPieceByIndex(const int index) const
{
	return this->_board[index];
}

char Board::getPieceByPlace(const std::string place) const
{
	return this->_board[getIndexByPlace(place)];
}


// Static helper functions

std::string Board::getPlaceByIndex(const int index)
{
	std::string coloumn = "";
	std::string row = "";
	std::string place = "";

	coloumn = index % CHESS_BOARD_SIZE + 'a';
	row = '8' - (index / CHESS_BOARD_SIZE);
	place = coloumn + row;

	return place;
}

int Board::getIndexByPlace(const std::string place)
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
	return boardCode[getIndexByPlace(place)];
}