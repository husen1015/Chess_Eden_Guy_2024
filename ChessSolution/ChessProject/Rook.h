#pragma once
#include "Piece.h"

class Rook : public Piece
{
public:

	Rook(const bool isWhite);

	virtual bool checkMoveIsValid() override;
};

/*
* short int shiba = 0;
Yo? BRO. WHAT JBDSIUCGBVE SMUG SHIBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
YAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
I JUST WANNA BE PART OF YOUR SYMPHONYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY
WAIT! They don't love you like I love you (-Smug Shiba - 2028)'
*/