#pragma once

#include "Piece.h"
#include "Square.h"

//Need to change / delete
class Piece : virtual public Piece { /* ... */ };

class Square : virtual public Square { /* ... */ };

class King : public Piece, public Square
{
public:
	King(bool isWhite);
	~King();

	//Getters
private:
};