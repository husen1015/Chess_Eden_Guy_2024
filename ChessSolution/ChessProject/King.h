#pragma once

#include "Piece.h"

class King : public Piece
{
public:
	King(const bool isWhite, const std::string place);
	~King();

	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;
	static bool checkKingMovement(const std::string src, const std::string dst);

	//virtual bool checkMoveIsValid(const std::string newPlace) override;
};
