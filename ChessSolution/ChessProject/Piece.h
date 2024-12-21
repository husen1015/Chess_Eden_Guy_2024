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

	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const;
	


protected:
	std::string _place;
	bool _isWhite;
};