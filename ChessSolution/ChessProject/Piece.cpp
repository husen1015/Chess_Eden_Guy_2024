#include "Piece.h"

Piece::Piece(bool isWhite)
{
	_isWhite = isWhite;
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