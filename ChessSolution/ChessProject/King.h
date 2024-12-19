#pragma once

#include "Piece.h"

class King : public Piece
{
public:
	virtual bool checkMoveIsValid() override;
};

// what is this???

//Need to change / delete
/*
class Piece : virtual public Piece { /* ...  };

class Square : virtual public Square { /* ...  };

class King : public Piece, public Square
{
public:
	King(bool isWhite);
	~King();

	//Getters
private:
};
*/