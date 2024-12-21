#include "Pawn.h"

Pawn::Pawn(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
}

Pawn::~Pawn()
{
}

bool Pawn::checkMoveIsValid()
{
    return false;
}
