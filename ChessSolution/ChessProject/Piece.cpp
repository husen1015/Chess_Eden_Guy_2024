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


// Static helper functions

int Piece::getRowMovement(const std::string src, const std::string dst)
{
	return std::abs(src[0] - dst[0]);
}

int Piece::getColoumnMovement(const std::string src, const std::string dst)
{
	return std::abs(src[1] - dst[1]);
}

