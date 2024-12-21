#include "Knight.h"

Knight::Knight(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
}

Knight::~Knight()
{
}

bool Knight::checkMoveIsValid()
{
    return false;
}
