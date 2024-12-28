#pragma once

#include <iostream>
#include <string.h>
#include "Board.h"
#include "Pipe.h"

class Manager
{
public:
	Manager(const Board board);
	~Manager();

	void newGame(Pipe& p);
	//Getters
	//bool GetCallPlayer() const;
	bool GetIsWhite() const;
	int GetTurn() const;
	//Board* GetBoard() const;

	std::string processMessageFromGraphics(const std::string msg);

private:
	//Fields
	//bool _callPlayer;
	std::string currPlayer;
	int _turn;
	Board _board;
};