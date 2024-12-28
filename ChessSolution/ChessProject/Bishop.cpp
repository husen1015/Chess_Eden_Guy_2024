#include "Bishop.h"

Bishop::Bishop(const bool isWhite, const std::string place) :
	Piece(isWhite, place)
{
}

Bishop::~Bishop()
{
}

std::string Bishop::getPieceType() const
{
	return "Bishop";
}

bool Bishop::checkMoveValidaty(const std::string moveCode, const std::string boardCode) const
{
	bool check = true;

	check = this->checkIfMoveSuitsPieceAbilites(moveCode);
	check = check && this->checkIfMoveHasMovement(moveCode);
	check = check && this->checkPiecesInDiagonalMove(moveCode, boardCode);
	//check = check && this->checkEatsOwnPiece(dst);
	return check;
}

bool Bishop::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
	int rowMovement = getRowMovement(_place, dst);
	int columnMovement = getColoumnMovement(_place, dst);

	return rowMovement == columnMovement;
}