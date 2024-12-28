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
	~Board();

	void initNormalBoard(); // Initializes a normal chess board at the start of the game
	void printBoard() const; // Prints the board code, same thing we send to Frontend
	void createPieces();

	std::string getCode();
	bool SetBoard(const std::string newBoard); //Set the new board acfter every move

	// Move piece methods
	bool tryToMove(const std::string moveCode);

	//Getters
	// Helper methods
	char getPieceByIndex(const int index) const;
	char getPieceByPlace(const std::string place) const;
	Piece* getPieceByTypeAndIsWhite(const std::string type, const bool isWhite) const;

	// Helper static functions
	static std::string getPlaceByIndex(const int index);
	static int getIndexByPlace(const std::string place);

	static char getPieceByIndex(std::string boardCode, const int index);
	static char getPieceByPlace(const std::string boardCode, const std::string place);

private:
	std::string _board;
};

