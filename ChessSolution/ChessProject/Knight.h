#pragma once

#include "Piece.h"

class Knight : public Piece
{
public:
	Knight(const bool isWhite, const std::string place);
	~Knight();

	//Getters
	virtual std::string getPieceType() const override;

	virtual bool checkMoveValidaty(const std::string moveCode, const std::string boardCode) const override;
	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;
};