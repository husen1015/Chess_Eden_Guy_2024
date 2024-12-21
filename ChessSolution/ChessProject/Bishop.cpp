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
	// EDEN PLS DO THIS
	int rowDifference = std::abs((src[0] - 'a') - (dst[0] - 'a'));
	int columnDifference = std::abs((src[1] - '0') - (dst[1] - '0'));

	return rowDifference == columnDifference;
}


