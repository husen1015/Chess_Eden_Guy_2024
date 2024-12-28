#include "Rook.h"

Rook::Rook(const bool isWhite, const std::string place) :
    Piece(isWhite, place)
{
}

Rook::~Rook()
{
}

std::string Rook::getPieceType() const
{
    return "Rook";
}

bool Rook::checkMoveValidaty(const std::string moveCode, const std::string boardCode) const
{
	bool check = true;

	check = this->checkIfMoveSuitsPieceAbilites(moveCode);
	check = check && this->checkIfMoveHasMovement(moveCode);
	check = check && this->checkPiecesInDiagonalMove(moveCode, boardCode);
	//check = check && this->checkEatsOwnPiece(dst);
	return check;
}

bool Rook::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
	return _place[0] == dst[0] || _place[1] == dst[1];
}