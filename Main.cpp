#include <iostream>

int enterThreeDigitIntegerX()
{
	int X = 100;
	do
	{
		if ((X >= 1000) or (X <= -1000) or ((X < 100) and (X >= 0)) or ((X < 0) and (X > -100)))
			std::cout << "������������ ���� ����� �!\n";
		std::cout << "������� ����� ����������� ����� �: ";
		std::cin >> X;
	} while ((X >= 1000) or (X <= -1000) or ((X < 100) and (X >= 0)) or ((X < 0) and (X > -100)));
	return X;
}

int enterNumberN()
{
	//����� programmer2
}

void findFirstDigitOfX(int X)
{
	//����� programmer3
}

void findNthDiginOfX(int N, int X)
{
	//����� programmer4
}

int main()
{
	setlocale(LC_ALL, "rus");
	int choosedMenu = 0, X = 0, N = 0;
	while (true)
	{
		std::cout << "�������� ���� �� ������� ����\n";
		std::cout << "1. ������ ����� ���������� ����� �\n";
		std::cout << "2. ������ ����� N\n";
		std::cout << "3. ����� ������ ����� ����� X\n";
		std::cout << "4. ����� X-� ����� ����� N\n";
		std::cout << "5. ���������� ���������\n";
		std::cout << "� ������� ����� ���� ��� ������� ";
		std::cin >> choosedMenu;
		switch (choosedMenu)
		{
		case 1:
			X = enterThreeDigitIntegerX();
			break;
		case 2:
			N = enterNumberN();
			break;
		case 3:
			findFirstDigitOfX(X);
			break;
		case 4:
			findNthDiginOfX(N, X);
			break;
		case 5:
			return 0;
		default:
			std::cout << "�� ������� �������� ����� ����!\n";
			break;
		}
	}
}