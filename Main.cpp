#include <iostream>

int enterThreeDigitIntegerX()
{
	int X = 100;
	do
	{
		if ((X >= 1000) or (X <= -1000) or ((X < 100) and (X >= 0)) or ((X < 0) and (X > -100)))
			std::cout << "Неправильный ввод числа Х!\n";
		std::cout << "Введите целое трёхзначеное число Х: ";
		std::cin >> X;
	} while ((X >= 1000) or (X <= -1000) or ((X < 100) and (X >= 0)) or ((X < 0) and (X > -100)));
	return X;
}

int enterNumberN()
{
	//ветка programmer2
}

void findFirstDigitOfX(int X)
{
	//ветка programmer3
}

void findNthDiginOfX(int N, int X)
{
	//ветка programmer4
}

int main()
{
	setlocale(LC_ALL, "rus");
	int choosedMenu = 0, X = 0, N = 0;
	while (true)
	{
		std::cout << "Выберите один из пунктов меню\n";
		std::cout << "1. Ввести целое трёхзначное число Х\n";
		std::cout << "2. Ввести цифру N\n";
		std::cout << "3. Найти первую цифру числа X\n";
		std::cout << "4. Найти X-ю цифру числа N\n";
		std::cout << "5. Остановить программу\n";
		std::cout << "Я выбираю пункт меню под номером ";
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
			std::cout << "Вы выбрали неверный пункт меню!\n";
			break;
		}
	}
}