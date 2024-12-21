#include "King.h"

King::King(const bool isWhite, const std::string place) :
    Piece(isWhite, place)
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
    int rowMovement = getRowMovement(src, dst);
    int coloumnMovement = getColoumnMovement(src, dst);

    return rowMovement <= 1 && coloumnMovement <= 1;
}
