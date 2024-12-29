#include "Rook.h"

Rook::Rook(const bool isWhite, const std::string place) :
    Piece(isWhite, place)
{
}

bool Rook::checkMoveValidaty(const std::string dst, const std::string boardCode) const
{
	bool check = true;

	/* lets make every move valid :D (for testing)
	check = this->checkIfMoveSuitsPieceAbilites(src, dst);
	check = check && this->checkIfMoveHasMovement(src, dst);
	check = check && this->checkPiecesInDiagonalMove(src, dst, boardCode);
	//check = check && this->checkEatsOwnPiece(dst);
	_place[0] == dst[0] || _place[1] == dst[1];
	*/
	return check;
}
