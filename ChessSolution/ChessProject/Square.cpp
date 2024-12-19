#include "Square.h"

Square::Square(bool isWhite)
{
    _piece;
    _isWhite = isWhite;
    _isOccupied = false;
}


Square::~Square()
{
}

Piece& Square::getPiece() const
{
    // TODO: insert return statement here
}

bool Square::getIsOccupied() const
{
    return false;
}

bool Square::getIsWhite() const
{
    return false;
}

void Square::setPiece(Piece& piece)
{
}
