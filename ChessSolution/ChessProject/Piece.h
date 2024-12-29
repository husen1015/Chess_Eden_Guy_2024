#pragma once

#include <iostream>
<<<<<<< HEAD
#include "cmath"
//#include "Rook.h"
#include "Board.h"
=======
#include <cmath>
>>>>>>> 49f4ad216855c62d4e45a59bb6996ee5bf9e8246

class Board;

class Piece
{

public:
	Piece(const bool isWhite, const std::string place);
<<<<<<< HEAD
	virtual ~Piece() = default;

=======
	virtual ~Piece();

	
>>>>>>> 49f4ad216855c62d4e45a59bb6996ee5bf9e8246

	//Getters
	bool getIsWhite() const;


	//Setters
	void setIsWhite(bool isWhite);

	virtual bool checkMoveValidaty(const std::string dst, const std::string boardCode) const = 0;
	bool checkIfMoveHasMovement(const std::string dst) const;
	bool checkIfEatsOwnPiece(const std::string dst, const std::string boardCode) const;
	bool checkIfMoveRevealsCheck(const bool isKingWhite, const std::string dst) const;


	// Virtual methods
	// Static helper functions
	static int getColumnMovement(const std::string src, const std::string dst);
	static int getRowMovement(const std::string src, const std::string dst);
	static bool getIsWhite(const char pieceType);

	// Check if there are pieces in squares between movement
	bool checkPiecesInStrightMove(const std::string dst, const std::string board) const;
	bool checkPiecesInDiagonalMove(const std::string dst, const std::string board) const;
	bool checkPiecesLeftOrRight(const int srcNum, const int dstNum, const std::string board) const;
	bool checkPiecesUpOrDown(const int srcNum, const int dstNum, const std::string board) const;
     


protected:
	bool _isWhite;
	std::string _place;
};



