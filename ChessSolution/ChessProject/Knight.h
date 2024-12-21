#pragma once

#include "Piece.h"

class Knight : public Piece
{
public:
	Knight(const bool isWhite, const std::string place);
	~Knight();

	virtual bool checkMoveIsValid() override;
};