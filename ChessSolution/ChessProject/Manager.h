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
<<<<<<< HEAD
	std::string currPlayer;
=======
	//std::vector<Piece*> _white;
	//std::vector<Piece*> _black;
	//:(    D:{    ]:(   
	bool _isWhite;
>>>>>>> 6fa63839aab47969d47f7fa067dade412b7244e5
	int _turn;
	Board _board;
};