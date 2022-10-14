#include <iostream>

int main()
{
	int* myBullets = new int[30];
	int* myTemp = new int[100];
	for (int i = 0; i < 30; i++)
	{
		myTemp[i] = myBullets[i];
	}

	delete[] myBullets;
	myBullets = myTemp;
}

// 포인터 변수 = 지역 변수 = 스택에 만들어짐
// new로 만들어지는 변수 = heap에 만들어짐

// delete = heap의 메모리를 해제하는 것
// 변수를 삭제하는 것이 아니다!!
