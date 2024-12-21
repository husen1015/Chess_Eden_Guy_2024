#include "Queen.h"

Queen::Queen(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
}

bool Queen::checkMoveIsValid()
{
    return false;
}
