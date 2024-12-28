#include "Piece.h"

Piece::Piece(const bool isWhite, const std::string place):
	 _place(place), _isWhite(isWhite)
{
}

Piece::~Piece()
{
}

bool Piece::getIsWhite() const
{
	return _isWhite;
}

void Piece::setIsWhite(bool isWhite)
{
	_isWhite = isWhite;
}


// CHECKING MOVE VALIDATY FUNCTIONS

bool Piece::checkMoveValidaty(const std::string moveCode, const std::string boardCode)
{
	std::string src = moveCode.substr(0, 2);
	std::string dst = moveCode.substr(2, 2);
	char piece = Board::getPieceByPlace(src);

	return
		checkIfEatsOwnPiece(piece, dst) &&
		piece->checkIfMoveSuitsPieceAbilites(dst) &&
		checkIfMoveRevealsCheck(piece->getIsWhite(), dst);
}

bool Piece::checkIfMoveHasMovement(const std::string src, const std::string dst)
{
	return src != dst;
}

bool Piece::checkIfEatsOwnPiece(const std::string dst, const std::string boardCode)
{
	if (Board::getPieceByPlace(dst) != nullptr)
	{
		return false; // There is no piece in dst
	}
	return getPieceByPlace(dst)->getIsWhite() == piece->getIsWhite(); // There is a piece in dst, now we need to check if it is the same color
	
}


// Static helper functions

int Piece::getRowMovement(const std::string src, const std::string dst)
{
	return std::abs(src[0] - dst[0]);
}

int Piece::getColoumnMovement(const std::string src, const std::string dst)
{
	return std::abs(src[1] - dst[1]);
}

