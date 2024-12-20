#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "Piece.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
#include "Pawn.h"

#define CHESS_BOARD_SIZE 64
#define CHESS_BOARD_SIZE 8


class Board
{
public:
	Board();

	void initNormalBoard(); // Initializes a normal chess board at the start of the game
	void printBoard() const; // Prints the board code, same thing we send to Frontend
	void createPieces();

	// Helper methods
	Piece* getPieceByIndex(const int index);
	Piece* getPieceByPlace(const std::string place);

	// Helper static functions
	static std::string calcPlaceByIndex(const int index);
	static int calcIndexByPlace(const std::string place);

private:
	std::string _code;
	std::vector<Piece> _pieces;
};