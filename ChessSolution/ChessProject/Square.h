#pragma once
#include "Piece.h"

class Square
{
public:

	// Getters
	Piece& getPiece() const;
	bool getIsOccupied() const;
	bool getIsWhite() const;

private:
	Piece& _piece;
	bool _isOccupied;
	bool _isWhite;

};