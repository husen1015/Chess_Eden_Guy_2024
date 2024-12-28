#pragma once

#include <iostream>
#include "cmath"

#include "Board.h"

class Piece
{

public:
	Piece(const bool isWhite, const std::string place);
	~Piece();


	//Getters
	bool getIsWhite() const;


	//Setters
	void setIsWhite(bool isWhite);

	bool checkMoveValidaty(const std::string moveCode, const std::string boardCode) const;
	bool checkIfMoveHasMovement(const std::string src, const std::string dst) const;
	bool checkIfEatsOwnPiece(const std::string dst, const std::string boardCode); const
	bool checkIfMoveRevealsCheck(const bool isKingWhite, const std::string dst); const
	static bool checkIfPiecesBetweenStrightLine (const std::string src, const std::string dst);


	// Virtual methods
	virtual bool checkIfMoveSuitsPieceAbilites(const std::string dst) const = 0;
	virtual std::string getPieceType() const = 0;

	// Static helper functions
	static int getRowMovement(const std::string src, const std::string dst);
	static int getColoumnMovement(const std::string src, const std::string dst);

	
protected:
	bool _isWhite;
	std::string _place;
};