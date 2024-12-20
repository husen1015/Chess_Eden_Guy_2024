#include "Board.h"

Board::Board()
{
	this->_code = "################################################################0"; // Empty board, white player starts
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
	std::string place = "";

	for (i = 0; i < CHESS_BOARD_SIZE; i++)
	{
		place = calcPlaceByIndex(i);

		switch (this->_code[i])
		{
		// BLACK PIECES
		case 'r':
			Rook newRook(false, place);
			this->_pieces.push_back(newRook);
			break;

		case 'n':
			Knight newKnight(false, place);
			this->_pieces.push_back(newKnight);
			break;

		case 'b':
			Bishop newBishop(false);
			this->_pieces.push_back(newBishop);
			break;

		case 'q':
			Queen newQueen(false);
			this->_pieces.push_back(newQueen);
			break;
		
		case 'k':
			King newKing(false);
			this->_pieces.push_back(newKing);
			break;

		// WHITE PIECES
		case 'R':
			Rook newRook(true);
			this->_pieces.push_back(newRook);
			break;

		case 'N':
			Knight newKnight(true);
			this->_pieces.push_back(newKnight);
			break;

		case 'B':
			Bishop newBishop(true);
			this->_pieces.push_back(newBishop);
			break;

		case 'Q':
			Queen newQueen(true);
			this->_pieces.push_back(newQueen);
			break;

		case 'K':
			King newKing(true);
			this->_pieces.push_back(newKing);
			break;

		case '#':
			Piece newPlaceholder(true);
			this->_pieces.push_back(newPlaceholder);
		default:
			std::cerr << "Error at Board::createPieces - invalid board code" << std::endl;
		}
	}
}


// Helper methods

Piece* Board::getPieceByIndex(const int index)
{
	return &this->_pieces[index];
}

Piece* Board::getPieceByPlace(const std::string place)
{
	return &this->_pieces[calcIndexByPlace(place)];
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
