#include "Queen.h"

Queen::Queen(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
}

Queen::~Queen()
{
}

bool Queen::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
    return checkQueenMovement(this->_place, dst);
}

std::string Queen::getPieceType() const
{
    return "Queen";
}

bool Queen::checkQueenMovement(const std::string src, const std::string dst)
{
    return Bishop::checkBishopMovement(src, dst) || Rook::checkRookMovement(src, dst);
}

/*bool Queen::checkMoveIsValid()
{
    return false;
}*/
