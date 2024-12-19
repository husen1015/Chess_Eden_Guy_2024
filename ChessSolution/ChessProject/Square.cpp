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
<<<<<<< HEAD
    return false;
=======
    return _isOccupied;
>>>>>>> 5657faba6a1a9431113c46eae1729b115d0f9a16
}

bool Square::getIsWhite() const
{
<<<<<<< HEAD
    return false;
}

void Square::setPiece(Piece& piece)
{
=======
    return _isWhite;
>>>>>>> 5657faba6a1a9431113c46eae1729b115d0f9a16
}
