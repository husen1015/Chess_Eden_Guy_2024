#pragma once

class Piece
{

public:
	Piece(bool isWhite);
	~Piece();

	//Getters
	bool getIsWhite() const;
	//Setters
	void setIsWhite(bool isWhite);

	virtual void move() = 0;
	virtual bool checkMoveIsValid() = 0;

protected:
	bool _isWhite;
};