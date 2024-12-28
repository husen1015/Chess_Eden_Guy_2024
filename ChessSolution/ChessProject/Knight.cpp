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

std::string Knight::getPieceType() const
{
    return "Knight";
}

bool Knight::checkKnightMovement(const std::string src, const std::string dst)
{
    int rowMovement = getRowMovement(src, dst);
    int coloumnMovement = getColoumnMovement(src, dst);

    return (rowMovement == 2 && coloumnMovement == 1) || (rowMovement == 1 && coloumnMovement == 2);
}

/*bool Knight::checkMoveIsValid()
{
    return false;
}*/
