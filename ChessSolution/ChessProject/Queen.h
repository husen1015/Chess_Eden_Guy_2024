#pragma once

#include "Piece.h"

class Queen : public Piece
{
public:
	Queen(const bool isWhite, const std::string place);
	~Queen();

	//Check if the movement fits the QUEEN valid movements
	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;
	virtual std::string getPieceType() const override;
	
	static bool checkQueenMovement(const std::string src, const std::string dst);

	//virtual bool checkMoveIsValid() override;
};