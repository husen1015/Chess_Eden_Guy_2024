#pragma once

#include "Piece.h"

class King : public Piece
{
public:
	King(const bool isWhite, const std::string place);
	~King();

	virtual bool checkMoveIsValid(const std::string newPlace) override;
};
