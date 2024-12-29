#pragma once

#include <iostream>
#include <string.h>
#include "Board.h"
#include "Pipe.h"

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

private:
	bool _isPlayerWhite;
	int _turn;
	Board _board;

};
