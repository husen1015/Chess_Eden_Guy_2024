#pragma once

#include "Piece.h"

class Bishop : public Piece
{
public:
	virtual bool checkMoveIsValid() override;
};