#pragma once

class Piece
{
private:
	bool _isWhite;
public:
	Piece(bool isWhite);
	~Piece();

	//Getters
	bool getIsWhite() const;
	//Setters
	void setIsWhite(bool isWhite);

	virtual void move() = 0;
};