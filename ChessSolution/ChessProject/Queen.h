#pragma once

#include "Piece.h"

class Queen : public Piece
{
public:
	Queen(const bool isWhite, const std::string place);
	~Queen();

	virtual bool checkMoveIsValid() override;
};