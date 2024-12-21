#include "Knight.h"

Knight::Knight(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
}

Knight::~Knight()
{
}

bool Knight::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
    return checkKnightMovement(this->_place, dst);
}

bool Knight::checkKnightMovement(const std::string src, const std::string dst)
{
    bool rowDifference = std::abs((src[0] - 'a') - (dst[0] - 'a')) == 2 && std::abs((src[1] - '0') - (dst[1] - '0')) == 1;
    bool columnDifference = std::abs((src[0] - 'a') - (dst[0] - 'a')) == 1 && std::abs((src[1] - '0') - (dst[1] - '0')) == 2;

    return rowDifference || columnDifference;
}

/*bool Knight::checkMoveIsValid()
{
    return false;
}*/
