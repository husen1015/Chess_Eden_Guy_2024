#include "Rook.h"

Rook::Rook(const bool isWhite, const std::string place) :
    Piece(isWhite, place)
{
}

Rook::~Rook()
{
}


char Rook::checkMoveValidaty(const std::string dst, const std::string boardCode) const
{
	char valadityCode = '0';

	if (!this->checkIfMoveHasMovement(dst))
	{
		valadityCode = '7';
	}
	else if (!(_place[0] == dst[0] || _place[1] == dst[1]))
	{
		valadityCode = '6';
	}
	else if (!this->checkPiecesInStrightMove(dst, boardCode))
	{
		valadityCode = '6';
	}
	else if (this->checkIfEatsOwnPiece(dst, boardCode))
	{
		valadityCode = '3';
	}
	else if (this->checkIfMoveRevealsCheck(dst, boardCode))
	{
		valadityCode = '4';
	}

	
	return valadityCode;
}

