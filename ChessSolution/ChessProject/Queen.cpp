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

bool Queen::checkQueenMovement(const std::string src, const std::string dst)
{
    bool diagonalMove = std::abs((src[0] - 'a') - (dst[0] - 'a')) == std::abs((src[1] - '0') - (dst[1] - '0'));
    bool straightMove = (std::abs((src[0] - 'a') - (dst[0] - 'a')) == 0 && std::abs((src[1] - '0') - (dst[1] - '0')) != 0) || (std::abs((src[0] - 'a') - (dst[0] - 'a')) != 0 && std::abs((src[1] - '0') - (dst[1] - '0')) == 0);

    return diagonalMove || straightMove;
}

/*bool Queen::checkMoveIsValid()
{
    return false;
}*/
