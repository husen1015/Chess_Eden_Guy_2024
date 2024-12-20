#pragma once

#include <iostream>
#include "Board.h"

class Piece
{

public:
	Piece(const bool isWhite, const std::string place);
	~Piece();

	//Getters
	bool getIsWhite() const;
	//Setters
	void setIsWhite(bool isWhite);

	bool checkIfEatsOwnPiece(std::string dst);

	virtual void move();
	virtual bool checkMoveIsValid();
	virtual bool checkIfMoveRevealsCheck();

protected:
	std::string _place;
	bool _isWhite;
};