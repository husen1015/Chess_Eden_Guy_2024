#include "Pawn.h"

Pawn::Pawn(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
    _firstMove = true;
}

Pawn::~Pawn()
{
}

std::string Pawn::getPieceType() const
{
    return "Pawn";
}

void Pawn::SetFirstMove(const bool firstMove)
{
	_firstMove = firstMove;
}

bool Pawn::checkMoveValidaty(const std::string dst, const std::string board) const
{
	bool check = true;

	check = this->checkIfMoveSuitsPieceAbilites(dst);
	check = check && this->checkIfMoveHasMovement(dst);
	check = check && this->checkPiecesInDiagonalMove(dst, board);
	//check = check && this->checkEatsOwnPiece(dst);
	return check;
}

bool Pawn::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
	int squares = 1;

	if (_firstMove)
	{
		squares = 2;
	}
	bool moveDifference = std::abs((_place[1] - '0') - (dst[1] - '0')) == squares;
	moveDifference = moveDifference || std::abs((_place[1] - '0') - (dst[1] - '0')) == 1;

	return moveDifference;
}

void Pawn::checkFirstMove(const std::string dst, const std::string board)
{
	if (_firstMove && this->checkMoveValidaty(dst, board))
	{
		_firstMove = false;
	}
}
