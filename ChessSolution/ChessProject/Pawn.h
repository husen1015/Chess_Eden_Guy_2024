#pragma once

#include "Piece.h"

class Pawn : public Piece
{
public:
	Pawn(const bool isWhite, const std::string place);
	~Pawn();

	//Getters
	virtual std::string getPieceType() const override;
	//Setters
	void SetFirstMove(const bool firstMove);

	virtual bool checkMoveValidaty(const std::string moveCode, const std::string boardCode) const override;
	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const override;
	void checkFirstMove(const std::string dst, const std::string board);

private:
	bool _firstMove;
};