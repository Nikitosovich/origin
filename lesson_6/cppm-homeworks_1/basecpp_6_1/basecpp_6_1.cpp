#include <iostream>
#include"my_math.h"

int main()
{
	setlocale(LC_ALL, "ru");

	int x, y, switch_on;
	while (true)
	{
		std::cout << "Введите первое число : ";
		std::cin >> x;
		std::cout << "Введите второе число : ";
		std::cin >> y;
		std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
		std::cin >> switch_on;
		switch (switch_on)
		{
		case SUM:
			std::cout << x << " плюс " << y << " = " << sum(x, y) << std::endl;
			break;

		case SUB:
			std::cout << x << " минуc " << y << " = " << sub(x, y) << std::endl;
			break;
		case MULTI:
			std::cout << x << " умножить на " << y << " = " << multi(x, y) << std::endl;
		case DIV:
			while (true)
			{
				if (y == 0) {
					std::cout << "На ноль делить нельзя.\nВведите число заново ";
					std::cin >> y;
				}
				else {
					break;
				}
			}
			std::cout << x << " делить на " << y << " = " << div1(x, y) << std::endl;
			break;
		case EXP:
			std::cout << x << " в степени " << y << " = " << exp(x, y) << std::endl;
			break;
		default:
			break;
		}
	}

	return 0;
}

