#pragma once

#include "Piece.h"

class Queen : public Piece
{
public:
	virtual bool checkMoveIsValid() override;
};