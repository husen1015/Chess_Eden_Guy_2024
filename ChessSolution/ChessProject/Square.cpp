#include "Square.h"


Square::Square(const bool isWhite, const std::string place):
    _isWhite(isWhite), _isOccupied(false), _place(place)
{
}


Square::~Square()
{
}


// Getters

bool Square::getIsOccupied() const
{
    return this->_isOccupied;
}

bool Square::getIsWhite() const
{
    return this->_isWhite;
}


// Setters

void Square::setIsOccupied(const bool isOccupied)
{
    this->_isOccupied = isOccupied;
}

