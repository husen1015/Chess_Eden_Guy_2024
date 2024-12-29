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

	void newGame(Pipe& p); //Manages the entire game, uses the pipe to communicate between the frontend and the backend
	

	// Getters

	bool GetIsWhite() const;
	int GetTurn() const;

	std::string processMessageFromGraphics(const std::string msg); 

private:
	bool _isPlayerWhite;
	int _turn;
	Board _board;
};
