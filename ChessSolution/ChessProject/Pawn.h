#pragma once

#include "Piece.h"

class Pawn : public Piece
{
public:
	Pawn(const bool isWhite, const std::string place);
	~Pawn();

	virtual bool checkMoveIsValid() override;
};