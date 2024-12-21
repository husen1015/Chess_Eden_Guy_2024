#pragma once

#include "Piece.h"

class Bishop : public Piece
{
public:

	Bishop(const bool isWhite, const std::string place);
	~Bishop();

	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;


	static bool checkBishopMovement(const std::string src, const std::string dst);

};