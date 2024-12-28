#pragma once

#include "Piece.h"

class King : public Piece
{
public:
	King(const bool isWhite, const std::string place);
	~King();

	virtual std::string getPieceType() const override;

	virtual bool checkMoveValidaty(const std::string moveCode, const std::string boardCode) const override;
	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;
};
