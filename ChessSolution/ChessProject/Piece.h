#pragma once
#include "Square.h"

class Square;

class Piece
{
private:
	bool _isWhite;
public:
	Piece(bool isWhite);
	~Piece();

	//Getters
	bool getIsWhite() const;
	//Setters
	void setIsWhite(bool isWhite);

	virtual void move() = 0;
	virtual bool checkMoveIsValid() = 0;
};