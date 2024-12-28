#pragma once

#include "Piece.h"

class Pawn : public Piece
{
public:
	Pawn(const bool isWhite, const std::string place);
	~Pawn();

	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;
	virtual std::string getPieceType() const override;
	
	static bool checkPawnMovement(const std::string src, const std::string dst, Pawn* pawn);

	//virtual bool checkMoveIsValid() override;
private:
	bool _firstMove;
};