#include "Manager.h"

Manager::Manager(const Board board)
{
	_isWhite = true;
	_turn = 0;
	_board = board;
}

Manager::~Manager()
{
}

bool Manager::GetIsWhite() const
{
	return _isWhite;
}

int Manager::GetTurn() const
{
	return _turn;
}


void Manager::processMessageFromGraphics(const std::string msg)
{

	while (!_board.SetBoard(msg))
	{
		std::cout << "The move isn't valid. I think." << std::endl;
	}
	_isWhite = !_isWhite; //Change player
	_turn++; //Add to number of turns
	std::cout << "The move IS VALID. I think." << std::endl;
}
