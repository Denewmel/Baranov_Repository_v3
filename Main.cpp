#include <iostream>

int enterThreeDigitIntegerX()
{
	//����� programmer1
}

int enterNumberN()
{
	//����� programmer2
}

void findFirstDigitOfX(int X)
{
	std::cout << "������ ����� ����� " << X << " ��� " << (X / 100) << std::endl;
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