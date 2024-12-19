#pragma once

#include <string>
#include "Piece.h"

class Piece;

class Square
{
public:
	Square(const bool isWhite, const std::string place);
	~Square();

	// Getters
	bool getIsOccupied() const;
	bool getIsWhite() const;

	// Setters
	void setIsOccupied(const bool isOccupied);

	// Other
	Piece& getPiece() const; //Optional

private:
	std::string _place;
	bool _isOccupied;
	bool _isWhite;

};