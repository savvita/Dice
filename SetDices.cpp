#include "setDices.h"

SetDices::SetDices(int size)
{
	if (size >= 0)
	{
		this->dices = new Dice[size];
		this->size = size;
	}
	else
	{
		size = 0;
	}
}

Dice& SetDices::operator[](const int index)
{
	if (index >= 0 && index < size)
	{
		return this->dices[index];
	}
	return this->dices[0];
}

int SetDices::totalSum()
{
	int sum = 0;
	for (int i = 0; i < this->size; i++)
	{
		sum += dices[i].getValue();
	}
	return sum;
}

std::ostream& operator<<(std::ostream& out, const SetDices& set)
{
	for (int i = 0; i < set.size; i++)
	{
		out << set.dices[i];
	}
	return out;
}

SetDices::~SetDices()
{
	if (this->dices)
		delete[] this->dices;
}