#pragma once

#include <string>
#include "Piece.h"

class Piece;

class Square
{
public:
	Square(bool isWhite);
	~Square();

	// Getters
	Piece& getPiece() const;
	bool getIsOccupied() const;
	bool getIsWhite() const;

	// Setters
	void setPiece(Piece& piece);
	

private:
	Piece& _piece;
	std::string _place;
	bool _isOccupied;
	bool _isWhite;

};