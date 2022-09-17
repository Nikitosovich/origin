#include <iostream>
#include <Windows.h>
#include <string>
#include "Counter.h"

void func(void* coun) {
	char a = 0;

	Counter* ccc = (Counter*)coun;
	while (true)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> a;
		if (a == 'х') {
			std::cout << "До свидания!" << std::endl;
			break;
		}
		switch (a)
		{
		case '+': ccc->inc_count();
			break;
		case '-': ccc->dec_count();
			break;
		case '=': std::cout << ccc->get_count() << std::endl;
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::endl;
	std::string input;
	std::cin >> input;
	if (input == "да")
	{
		int x = 0;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> x;
		Counter coun2(x);
		func(&coun2);
	}
	else if (input == "нет") {
		Counter coun1;
		func(&coun1);
	}
	std::cout << "Работа завершена!";

	system("pause");
	return 0;
}

