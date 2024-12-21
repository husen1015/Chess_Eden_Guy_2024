#pragma once

#include "Piece.h"

class Knight : public Piece
{
public:
	Knight(const bool isWhite, const std::string place);
	~Knight();

	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;
	static bool checkKnightMovement(const std::string src, const std::string dst);

	//virtual bool checkMoveIsValid() override;
};