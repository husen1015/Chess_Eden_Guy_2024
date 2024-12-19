#pragma once

#include <string>
#include "Piece.h"

class Piece;

class Square
{
public:

	// Getters
	Piece& getPiece() const;
	bool getIsOccupied() const;
	bool getIsWhite() const;

private:
	Piece& _piece;
	std::string _place;
	bool _isOccupied;
	bool _isWhite;

};