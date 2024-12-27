#include "Board.h"

Board::Board()
{
	this->_code = "################################################################0"; // Empty board, white player starts
}

void Board::initNormalBoard()
{
	this->_code = "r##############################################################R0";
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
			Rook * newRook = new Rook(false, place);
			this->_pieces.push_back(newRook);
			break;

		case 'n':
			Knight * newKnight = new Knight(false, place);
			this->_pieces.push_back(newKnight);
			break;

		case 'b':
			Bishop * newBishop = new Bishop(false, place);
			this->_pieces.push_back(newBishop);
			break;

		case 'q':
			Queen * newQueen = new Queen(false, place);
			this->_pieces.push_back(newQueen);
			break;

		case 'k':
			King * newKing = new King(false, place);
			this->_pieces.push_back(newKing);
			break;

			// WHITE PIECES
		case 'R':
			Rook * newRook = new Rook(true, place);
			this->_pieces.push_back(newRook);
			break;

		case 'N':
			Knight * newRook = new Knight(true, place);
			this->_pieces.push_back(newKnight);
			break;

		case 'B':
			Bishop * newRook = new Bishop(true, place);
			this->_pieces.push_back(newBishop);
			break;

		case 'Q':
			Queen * newRook = new Queen(true, place);
			this->_pieces.push_back(newQueen);
			break;

		case 'K':
			King * newRook = new King(true, place);
			this->_pieces.push_back(newKing);
			break;

		case '#':
			this->_pieces.push_back(nullptr);
		default:
			std::cerr << "Error at Board::createPieces - invalid board code" << std::endl;
		}
	}
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

bool Board::checkMoveIsValid(const std::string moveCode) const
{
	
	std::string src = moveCode.substr(0, 2);
	std::string dst = moveCode.substr(2, 2);
	Piece* piece = this->getPieceByPlace(src);

	return 
		checkIfEatsOwnPiece(piece, dst) &&
		piece->checkIfMoveSuitsPieceAbilites(dst) &&
		checkIfMoveRevealsCheck(piece->getIsWhite(), dst);
}

bool Board::checkIfMoveRevealsCheck(const bool isKingWhite, const std::string dst) const
{
	/*
	int i = 0;
	Piece* currPlayerKing = getPieceByTypeAndIsWhite("King", isKingWhite);
	Piece* piece = nullptr;

	for (i = 0; i < CHESS_BOARD_SIZE; i++)
	{
		piece = this->_pieces[i];
		if (piece->getIsWhite() != isKingWhite)
		{
			oppositeColorPieces.push_back(piece);
		}
		else if (piece
	}
	*/
}

bool Board::checkIfMoveChangesPosition(const std::string src, const std::string dst) const
{
	return src == dst;
}

bool Board::checkIfEatsOwnPiece(Piece* piece, const std::string dst) const
{
	
	if (getPieceByPlace(dst) != nullptr)
	{
		return false; // There is no piece in dst
	}
	return getPieceByPlace(dst)->getIsWhite() == piece->getIsWhite(); // There is a piece in dst, now we need to check if it is the same color
}








// Helper methods

Piece* Board::getPieceByIndex(const int index) const
{
	return this->_pieces[index];
}

Piece* Board::getPieceByPlace(const std::string place) const
{
	return this->_pieces[calcIndexByPlace(place)];
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

bool Piece::checkIfPiecesBetweenStrightLine(const std::string src, const std::string dst)
{
	int i = 0; 
	
	for (i = 0; i < CHESS_BOARD_SIZE; i++)
	{
		if ()
}
