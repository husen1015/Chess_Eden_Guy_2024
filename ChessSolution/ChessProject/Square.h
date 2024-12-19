#pragma once
#include "Piece.h"

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
	bool _isOccupied;
	bool _isWhite;

};