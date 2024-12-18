#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Square.h"

#include "Piece.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
#include "Pawn.h"

#define CHESS_BOARD_SIZE 64

class Square;

class Board
{
public:
	Board();

	void initNormalBoard(); // Initializes a normal chess board at the start of the game
	void printBoard() const; // Prints the board code, same thing we send to Frontend
	void createPieces();

	static std::string calcPlaceByNumber(const int numPlace);

private:
	std::string _code;
	std::vector<Square> _squares;
	std::vector<Piece> _pieces;
};