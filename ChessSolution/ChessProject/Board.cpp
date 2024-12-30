#include "Board.h"

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

Piece* Board::createPieceByType(char pieceType, std::string place)
{
	switch (pieceType)
	{

		// BLACK PIECES (isWhite = false)
	case 'r':
		return new Rook(false, place);
		// WHITE PIECES (isWhite = true)
	case 'R':
		return new Rook(true, place);
	default:
		std::cout << "Error in createPieceByType" << std::endl;
	}
	return nullptr;
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

char Board::tryToMove(const std::string moveCode)
{
	std::string src = moveCode.substr(0, 2);
	std::string dst = moveCode.substr(2, 2);

	char valadityCode = '0';
	char movingPieceType = this->getPieceByPlace(src);
	Piece* piece = createPieceByType(movingPieceType, src);

	if (!piece) // Checking if there was a piece in src
	{
		valadityCode = '2';
		return valadityCode;
	}
	valadityCode = piece->checkMoveValidaty(dst, this->getCode());
	
	if (valadityCode == '0' || valadityCode == '1')
	{
		this->_board[getIndexByPlace(dst)] = this->_board[getIndexByPlace(src)]; // Moving the piece in the boardCode to the destination
		this->_board[getIndexByPlace(src)] = '#'; // Removing the piece now that it is in its new location
		this->_board[CHESS_BOARD_SIZE] = !(this->_board[CHESS_BOARD_SIZE] - '0') + '0'; // replacing 0 with 1 or 1 with 0 - changing the currant player
	}
	delete piece;

	return valadityCode;
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
	std::string column = "";
	std::string row = "";
	std::string place = "";

	column = index % CHESS_BOARD_SIDE + 'a';
	row = '8' - (index / CHESS_BOARD_SIDE);
	place = column + row;

	return place;
}

int Board::getIndexByPlace(const std::string place)
{
	int column = 0;
	int row = 0;
	int index = 0;

	column = place[0] - 'a';
	row = '8' - place[1];
	index = row * CHESS_BOARD_SIDE + column;

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