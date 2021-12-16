#include <iostream>
#include"SetDices.h"
using std::cout;

int main()
{
	int size = 10;
	SetDices set(size);
	for (int i = 0; i < size; i++)
	{
		set[i].setValue(i);
	}
	
	cout << set << "\n";
	cout << set.totalSum() << "\n";
}
