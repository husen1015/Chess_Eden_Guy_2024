#include "Bishop.h"

Bishop::Bishop(const bool isWhite, const std::string place) :
	Piece(isWhite, place)
{
}

Bishop::~Bishop()
{
}

bool Bishop::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
	return checkBishopMovement(this->_place, dst);
}


bool Bishop::checkBishopMovement(const std::string src, const std::string dst)
{
	int rowMovement = getRowMovement(src, dst);
	int columnMovement = getColoumnMovement(src, dst);

	return rowMovement == columnMovement;
}


