#include "Manager.h"

Manager::Manager()
{
	this->_isPlayerWhite = true;
	this->_turn = 0;
	this->_board = Board();
}

Manager::~Manager()
{
}


void Manager::newGame(Pipe& p)
{
	char msgToGraphics[1024];

	this->_board.initNormalBoard();

	strcpy_s(msgToGraphics, this->_board.getCode().c_str()); // We the c_str() method to convert std::string to char[] so we can copy it using strcpy_s
	p.sendMessageToGraphics(msgToGraphics); // send the board string

	std::string msgFromGraphics = p.getMessageFromGraphics().c_str();

	while (msgFromGraphics != "quit")
	{
		strcpy_s(msgToGraphics, this->processMessageFromGraphics(msgFromGraphics).c_str()); // msgToGraphics should contain the result of the operation

		// return result to graphics		
		p.sendMessageToGraphics(msgToGraphics);

		msgFromGraphics = p.getMessageFromGraphics();
	}
}

bool Manager::GetIsWhite() const
{
	return this->_isPlayerWhite;
}

int Manager::GetTurn() const
{
	return this->_turn;
}


std::string Manager::processMessageFromGraphics(const std::string msg)
{
	bool success = this->_board.tryToMove(msg); // Sending the move code (msg) to try to move the pieces accordingly
	
	if (success)
	{
		this->_isPlayerWhite = !this->_isPlayerWhite; // Change current player color
		this->_turn++; //Add to number of turns
		std::cout << "The move IS VALID. I think." << std::endl;
		return "0";
	}
	else
	{
		std::cout << "The move IS NOT VALID. I think (:" << std::endl;
		return "1";
	}
}
