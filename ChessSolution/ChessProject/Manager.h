#pragma once

#include <iostream>
#include <string.h>
#include "Board.h"


class Manager
{
public:
	Manager();
	~Manager();

	//Getters
	bool GetCallPlayer() const;
	int GetTurn() const;
	Board* GetBoard() const;

	void processMessageFromGraphics(const std::string msg);

private:
	//Fields
	bool _callPlayer;
	int _turn;
	Board _board;
};