#pragma once
#include"Dice.h"
#include<iostream>

class SetDices
{
private:
	Dice* dices;
	int size;

public:
	explicit SetDices(int size);

	//gets
	inline int getSize() const
	{
		return this->size;
	}

	Dice& operator[](const int index);

	friend std::ostream& operator<<(std::ostream& out, const SetDices& set);

	int totalSum();

	~SetDices();

};

