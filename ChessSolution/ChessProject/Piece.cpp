#include "Piece.h"
#include "Board.h"

Piece::Piece(const bool isWhite, const std::string place):
	 _place(place), _isWhite(isWhite)
{
}

Piece::~Piece()
{
}




bool Piece::getIsWhite() const
{
	return _isWhite;
}

void Piece::setIsWhite(bool isWhite)
{
	_isWhite = isWhite;
}


// CHECKING MOVE VALIDATY FUNCTIONS




bool Piece::checkIfMoveHasMovement(const std::string dst) const
{
	return this->_place != dst;
}

bool Piece::checkIfEatsOwnPiece(const std::string dst, const std::string boardCode) const
{
    char pieceInDst = Board::getPieceByPlace(dst, boardCode);

    if (pieceInDst != '#')
	{
		return false; // There is no piece in dst
	}

    if (getIsWhite(pieceInDst) == this->getIsWhite())
    {
        return true;
    }
    return false;
}

bool Piece::checkIfMoveRevealsCheck(const std::string dst, const std::string boardCode) const
{
    return false;
}


// Static helper functions


int Piece::getColumnMovement(const std::string src, const std::string dst)
{
	return std::abs(src[1] - dst[1]);
}
int Piece::getRowMovement(const std::string src, const std::string dst)
{
	return std::abs(src[0] - dst[0]);
}


bool Piece::getIsWhite(const char pieceType)
{
    return pieceType >= 'A' && pieceType <= 'Z'; // White pieces are capital letters
}

bool Piece::checkPiecesInStrightMove(const std::string dst, const std::string board) const
{
    int i = 0, j = 0, srcNum = 0, dstNum = 0;
    bool direction = _place[0] == dst[0];
    srcNum = ((_place[0] - '0' - 1) * 8 + (_place[1] - 'a' - 97)); //Get src index
    dstNum = ((dst[0] - '0' - 1) * 8 + (dst[1] - 'a' - 97)); //Get dst index
    
    if (direction) //Going left or right
    {
        return checkPiecesLeftOrRight(srcNum, dstNum, board);
    }
    return checkPiecesUpOrDown(srcNum, dstNum, board);
}

bool Piece::checkPiecesInDiagonalMove(const std::string dst, const std::string board) const
{
	return false;
}

bool Piece::checkPiecesLeftOrRight(const int srcNum, const int dstNum, const std::string board) const
{
    int firstIndex = srcNum, lastIndex = dstNum; //Moving right on the board

    if (dstNum < srcNum) // Moving left on the board
    {
        firstIndex = dstNum;
        lastIndex = srcNum;
    }
    for (; firstIndex <= lastIndex; firstIndex++) //Go over all the squares between src to dst
    {
        if (board[firstIndex] != '#') //If there is a piece in square
        {
            return false; //Move is invalid
        }
    }
    return true; //Move is valid
}

bool Piece::checkPiecesUpOrDown(const int srcNum, const int dstNum, const std::string board) const
{
    int firstIndex = srcNum, lastIndex = dstNum; //Moving down on the board

    if (dstNum < srcNum) // Moving up on the board
    {
        firstIndex = dstNum;
        lastIndex = srcNum;
    }
    for (; firstIndex <= lastIndex; firstIndex += 8) //Go over all the squares between src to dst
    {
        if (board[firstIndex] != '#') //If there is a piece in square
        {
            return false; //Move is invalid
        }
    }
    return true; //Move is valid
}

