#pragma once

#include <iostream>
#include "cmath"

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


	// Virtual methods
	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const = 0;


	// Static helper functions
	static int getRowMovement(const std::string src, const std::string dst);
	static int getColoumnMovement(const std::string src, const std::string dst);
	
protected:
	char _id;
	bool _isWhite;
	std::string _place;
};