#include "King.h"
/*
King::King(const bool isWhite, const std::string place) :
    Piece(isWhite, place)
{
    
}

King::~King()
{
}

std::string King::getPieceType() const
{
    return "King";
}

bool King::checkMoveValidaty(const std::string moveCode, const std::string boardCode) const
{
	bool check = true;

	check = this->checkIfMoveSuitsPieceAbilites(moveCode);
	check = check && this->checkIfMoveHasMovement(moveCode);
	check = check && this->checkPiecesInDiagonalMove(moveCode, boardCode);
	//check = check && this->checkEatsOwnPiece(dst);
	return check;
}

bool King::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
	int rowMovement = getRowMovement(_place, dst);
	int coloumnMovement = getColumnMovement(_place, dst);

	return rowMovement <= 1 && coloumnMovement <= 1;
}
*/