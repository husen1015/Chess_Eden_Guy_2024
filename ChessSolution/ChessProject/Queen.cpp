#include "Queen.h"

Queen::Queen(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
}

Queen::~Queen()
{
}

std::string Queen::getPieceType() const
{
    return "Queen";
}

bool Queen::checkMoveValidaty(const std::string moveCode, const std::string boardCode) const
{
	bool check = true;

	check = this->checkIfMoveSuitsPieceAbilites(moveCode);
	check = check && this->checkIfMoveHasMovement(moveCode);
	check = check && this->checkPiecesInDiagonalMove(moveCode, boardCode);
	//check = check && this->checkEatsOwnPiece(dst);
	return check;
}

bool Queen::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
	int rowMovement = getRowMovement(_place, dst);
	int columnMovement = getColumnMovement(_place, dst);

	bool check = rowMovement == columnMovement;
	check = check || _place[0] == dst[0] || _place[1] == dst[1];

	return check;
}