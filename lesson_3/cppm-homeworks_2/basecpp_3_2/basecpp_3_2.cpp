#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Counter
{
private:
	int count;
public:
	Counter() :count(1)
	{}
	Counter(int count) {
		this->count = count;
	}
	void inc_count()
	{
		count++;
	}
	void dec_count()
	{
		count--;
	}
	int get_count()
	{
		return count;
	}
};

void func(Counter coun) {
	char a = 0;
	while (true)
	{
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> a;
		if (a == 'х') {
			cout << "До свидания!" << endl;
			break;
		}
		switch (a)
		{
		case '+': coun.inc_count();
			break;
		case '-': coun.dec_count();
			break;
		case '=': cout << coun.get_count() << endl;
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << endl;
	string input;
	cin >> input;

	if (input == "да")
	{
		int x = 0;
		cout << "Введите начальное значение счётчика: ";
		cin >> x;
		Counter coun2(x);
		func(coun2);
	}
	else if (input == "нет") {
		Counter coun1;
		func(coun1);
	}
	cout << "Работа завершена!";

	system("pause");
	return 0;
}
