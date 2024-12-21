#include "King.h"

King::King(const bool isWhite, const std::string place) :Piece(isWhite, place)
{
}

King::~King()
{
}

bool King::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
    return checkKingMovement(this->_place, dst);
}

bool King::checkKingMovement(const std::string src, const std::string dst)
{
    bool diagonalMove = std::abs((src[0] - 'a') - (dst[0] - 'a')) == 1 && std::abs((src[1] - '0') - (dst[1] - '0')) == 1;
    bool straightMove = (std::abs((src[0] - 'a') - (dst[0] - 'a')) == 1 && std::abs((src[1] - '0') - (dst[1] - '0')) == 0) || (std::abs((src[0] - 'a') - (dst[0] - 'a')) == 0 && std::abs((src[1] - '0') - (dst[1] - '0')) == 1);

    return diagonalMove || straightMove;
}

/*bool King::checkMoveIsValid(const std::string newPlace)
{
    _place
    return false;
}*/
