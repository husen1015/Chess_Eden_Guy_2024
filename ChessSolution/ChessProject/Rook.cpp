#include "Rook.h"

Rook::Rook(const bool isWhite, const std::string place) :
    Piece(isWhite, place)
{
}

Rook::~Rook()
{
}



bool Rook::checkIfMoveSuitsPieceAbilites(const std::string dst) const
{
    return checkRookMovement(this->_place, dst);
}

std::string Rook::getPieceType() const
{
    return "Rook";
}

bool Rook::checkRookMovement(const std::string src, const std::string dst)
{
    return src[0] == dst[0] || src[1] == dst[1];
}

bool Rook::checkIfPiecesBetweenRookMovement(const std::string dst, const std::string boardCode)
{
    return this->checkPiecesInStrightMove(dst, boardCode);
}
