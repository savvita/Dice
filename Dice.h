#pragma once
#include<iostream>

class Dice
{
private:
	int value;
public:
	Dice();

	explicit Dice(int value)
	{
		this->setValue(value);
	} 

	//sets
	void setValue(int value);

	//gets
	inline int getValue() const
	{
		return this->value;
	}

	friend std::ostream& operator<<(std::ostream& out, const Dice& dice);
};

