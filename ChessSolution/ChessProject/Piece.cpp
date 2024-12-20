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

bool Piece::checkIfEatsOwnPiece(std::string moveCode)
{
	return false;
}
