#include "Dice.h"
using std::cout;

Dice::Dice()
{
	this->value = 1;
}

void Dice::setValue(int value) 
{
	if (value >= 1 && value <= 6)
		this->value = value;
	else
		this->value = 1;
}

std::ostream& operator<<(std::ostream& out, const Dice& dice)
{
	cout << char(201);
	for (int i = 0; i < 15; i++)
		cout << char(205);
	cout << char(187) << "\n";
	switch (dice.value)
	{
	case 1:
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "       " << char(15) << "       " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		break;
	case 2:
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "           " << char(15) << "   " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "   " << char(15) << "           " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		break;
	case 3:
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "           " << char(15) << "   " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "       " << char(15) << "       " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "   " << char(15) << "           " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		break;
	case 4:
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "   " << char(15) << "       " << char(15) << "   " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "   " << char(15) << "       " << char(15) << "   " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		break;
	case 5:
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "   " << char(15) << "       " << char(15) << "   " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "       " << char(15) << "       " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		cout << char(186) << "   " << char(15) << "       " << char(15) << "   " << char(186) << "\n";
		cout << char(186) << "               " << char(186) << "\n";
		break;
	case 6:
		cout << char(186) << "               " << char(186) << "\n";
		for (int i = 0; i < 3; i++)
		{
			cout << char(186) << "   " << char(15) << "       " << char(15) << "   " << char(186) << "\n";
			cout << char(186) << "               " << char(186) << "\n";
		}
		break;
	}
	cout << char(200);
	for (int i = 0; i < 15; i++)
		cout << char(205);
	cout << char(188) << "\n";

	return out;
}
