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

void Manager::newGame(Pipe& p)
{
	char msgToGraphics[1024];
	Board gameBoard;

	gameBoard.initNormalBoard();
	strcpy_s(msgToGraphics, gameBoard.getCode());
	p.sendMessageToGraphics(msgToGraphics);   // send the board string

	std::string msgFromGraphics = p.getMessageFromGraphics();

	while (msgFromGraphics != "quit")
	{
		strcpy_s(msgToGraphics, Manager::processMessageFromGraphics(msgFromGraphics)); // msgToGraphics should contain the result of the operation

		// return result to graphics		
		p.sendMessageToGraphics(msgToGraphics);

		// get message from graphics
		msgFromGraphics = p.getMessageFromGraphics();
	}
}

bool Manager::GetIsWhite() const
{
	return _isWhite;
}

int Manager::GetTurn() const
{
	return _turn;
}


std::string Manager::processMessageFromGraphics(const std::string msg)
{

	while (!_board.SetBoard(msg))
	{
		std::cout << "The move isn't valid. I think." << std::endl;
	}
	_isWhite = !_isWhite; //Change player
	_turn++; //Add to number of turns
	std::cout << "The move IS VALID. I think." << std::endl;
}
