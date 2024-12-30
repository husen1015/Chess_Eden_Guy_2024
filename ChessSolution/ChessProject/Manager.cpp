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
	//msgToGraphics[0] = '\0';
	for (int i = 0; i < 1024;  i++)
	{
		msgToGraphics[i] = '\0';
	}
	while (msgFromGraphics != "quit")
	{
		msgToGraphics[0] = this->processMessageFromGraphics(msgFromGraphics); // msgToGraphics should contain the result of the operation

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


char Manager::processMessageFromGraphics(const std::string msg)
{
	char valadityCode = this->_board.tryToMove(msg); // Sending the move code (msg) to try to move the pieces accordingly
	
	if (valadityCode == '0')
	{
		this->_isPlayerWhite = !this->_isPlayerWhite; // Change current player color
		this->_turn++; //Add to number of turns
		std::cout << "The move IS VALID. I think." << std::endl;
		
	}
	else
	{
		std::cout << "The move IS NOT VALID. I think (:" << std::endl;
	}
	return valadityCode;
}
