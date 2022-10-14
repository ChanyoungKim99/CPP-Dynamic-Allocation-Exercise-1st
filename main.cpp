#include <iostream>

int main()
{
	int* pNumbers = new int[5];

	pNumbers[0] = 4;
	pNumbers[1] = 8;
	pNumbers[2] = 5;
	pNumbers[3] = 3;
	pNumbers[4] = 1;


	int* pNumbers2 = new int[3];

	for (int i = 0; i < 3; i++)
	{
		pNumbers2[i] = pNumbers[i];
	}

	delete[] pNumbers2;
	delete[] pNumbers;
}