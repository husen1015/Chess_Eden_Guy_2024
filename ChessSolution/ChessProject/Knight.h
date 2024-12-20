#pragma once

#include "Piece.h"

class Knight : public Piece
{
public:
	virtual bool checkMoveIsValid() override;
};