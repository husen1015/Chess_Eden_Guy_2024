#include "Knight.h"

/*
Knight::Knight(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
}

Knight::~Knight()
{
}

std::string Knight::getPieceType() const
{
	return "Knight";
}

bool Knight::checkMoveValidaty(const std::string moveCode, const std::string boardCode) const
{
	bool check = true;

	check = this->checkIfMoveSuitsPieceAbilites(moveCode);
	check = check && this->checkIfMoveHasMovement(moveCode);
	check = check && this->checkPiecesInDiagonalMove(moveCode, boardCode);
	//check = check && this->checkEatsOwnPiece(dst);
	return check;
}

bool Knight::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
	int rowMovement = getRowMovement(_place, dst);
	int columnMovement = getColumnMovement(_place, dst);

	return (rowMovement == 2 && columnMovement == 1) || (rowMovement == 1 && columnMovement == 2);

}*/