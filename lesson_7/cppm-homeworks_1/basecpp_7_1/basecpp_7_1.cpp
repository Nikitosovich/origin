#include <iostream>
#include <format>
#include <string>

#define MODE 1

#if !defined MODE
#error Important macro required
#endif 

int add(int x, int y) {
	return x + y;
}

int main()
{
	setlocale(LC_ALL, "ru");

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	int x, y;
	std::cout << "Введите число 1: ";
	std::cin >> x;
	std::cout << "Введите число 2: ";
	std::cin >> y;
	std::cout << format("Результат сложения: {}\n", std::to_string(add(x, y)));

#else 
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif


}
