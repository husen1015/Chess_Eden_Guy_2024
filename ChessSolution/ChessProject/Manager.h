#pragma once

#include <iostream>
#include <string.h>
#include "Board.h"
#include "Pipe.h"
#include "Piece.h"
#include <vector>

class Manager
{
public:
	Manager();
	~Manager();

	void newGame(Pipe& p);
	//Getters
	//bool GetCallPlayer() const;
	bool GetIsWhite() const;
	int GetTurn() const;
	//Board* GetBoard() const;

	std::string processMessageFromGraphics(const std::string msg);

	static int createPieceByType(char pieceType, std::string place, std::vector<Piece*> pieces);

private:
	bool _isPlayerWhite;
	int _turn;
	Board _board;

};
