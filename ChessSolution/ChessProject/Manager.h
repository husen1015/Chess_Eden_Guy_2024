#pragma once

#include <iostream>
#include <string.h>
#include "Board.h"


class Manager
{
public:
	Manager(const Board board);
	~Manager();

	//Getters
	//bool GetCallPlayer() const;
	bool GetIsWhite() const;
	int GetTurn() const;
	//Board* GetBoard() const;

	void processMessageFromGraphics(const std::string msg);

private:
	//Fields
	//bool _callPlayer;
	//std::vector<Piece*> _white;
	//std::vector<Piece*> _black;
	//:(    D:{    ]:(   
	bool _isWhite;
	int _turn;
	Board _board;
};