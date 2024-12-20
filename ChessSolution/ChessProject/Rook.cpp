#include "Rook.h"

Rook::Rook(const bool isWhite, const std::string place) :
    Piece(isWhite)
{
}

bool Rook::checkMoveIsValid()
{
    return false;
}
