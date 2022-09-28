#include <Windows.h>
#include <iostream>
#include <string>

int function(std::string str, int forbidden_length) {
	int length_str;
	if ((length_str = str.length()) == forbidden_length) {
		throw "Вы ввели слово запретной длины! До свидания";
	}
	return length_str;
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbidden_length;
	std::string str;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	while (true)
	{
		std::cout << "Введите слово: ";
		std::cin >> str;
		try
		{
			int result = function(str, forbidden_length);
			std::cout << "Длина слова \"" << str << "\" равна " << result << "\n";
		}
		catch (const char* msg)
		{
			std::cout << msg << "\n";
			break;
		}
	}
	system("pause");
	return 0;

}

