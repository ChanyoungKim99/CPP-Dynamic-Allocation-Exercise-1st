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

// ������ ���� = ���� ���� = ���ÿ� �������
// new�� ��������� ���� = heap�� �������

// delete = heap�� �޸𸮸� �����ϴ� ��
// ������ �����ϴ� ���� �ƴϴ�!!
