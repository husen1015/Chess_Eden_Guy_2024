#pragma once

#include "Piece.h"

class Queen : public Piece
{
public:
	Queen(const bool isWhite, const std::string place);
	~Queen();

	//Getters
	virtual std::string getPieceType() const override;

	//Check if the movement fits the QUEEN valid movements
	virtual bool checkMoveValidaty(const std::string moveCode, const std::string boardCode) const override;
	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;
};