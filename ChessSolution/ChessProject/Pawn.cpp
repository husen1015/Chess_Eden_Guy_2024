#include "Pawn.h"

Pawn::Pawn(const bool isWhite, const std::string place) : Piece(isWhite, place)
{
    _firstMove = true;
}

Pawn::~Pawn()
{
}

bool Pawn::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
    return checkPawnMovement(this->_place, dst);
}

std::string Pawn::getPieceType() const
{
    return "Pawn";
}

bool Pawn::checkPawnMovement(const std::string src, const std::string dst, Pawn* pawn)
{
    int squares = 1;

    if (pawn->_firstMove)
    {
        squares = 2;
        pawn->_firstMove = false;
    }
    bool moveDifference = std::abs((src[1] - '0') - (dst[1] - '0')) == squares;
    
    return moveDifference;
}

/*bool Pawn::checkMoveIsValid()
{
    return false;
}*/
