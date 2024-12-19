#pragma once

#include "Piece.h"

class Pawn : public Piece
{
public:
	virtual bool checkMoveIsValid() override;
};