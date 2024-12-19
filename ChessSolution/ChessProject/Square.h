#pragma once

#include <string>


class Square
{
public:
	Square(const bool isWhite, const std::string place);
	~Square();

	// Getters
	bool getIsOccupied() const;
	bool getIsWhite() const;

	// Setters
	void setIsOccupied(const bool isOccupied);


private:
	std::string _place;
	bool _isOccupied;
	bool _isWhite;

};