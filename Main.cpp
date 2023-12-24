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
	int N = 0;
	do
	{
		if ((N > 9) or (N < 0))
			std::cout << "������������ ���� ����� N!\n";
		std::cout << "������� ����� N: ";
		std::cin >> N;
	} while ((N > 9) or (N < 0));
	return N;
}

void findFirstDigitOfX(int X)
{
	std::cout << "������ ����� ����� " << X << " ��� " << (X / 100) << std::endl;
}

void findNthDiginOfX(int N, int X)
{
	switch (N)
	{
	case 1:
		std::cout << N << " ����� ����� " << X << " ��� " << (X/100) << std::endl;
		break;
	case 2:
		std::cout << N << " ����� ����� " << X << " ��� " << ((X/10)%10) << std::endl;
		break;
	case 3:
		std::cout << N << " ����� ����� " << X << " ��� " << (X%10) << std::endl;
		break;
	}
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