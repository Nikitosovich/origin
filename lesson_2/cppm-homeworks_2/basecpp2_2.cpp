#include <iostream>
#include <Windows.h>
using namespace std;

struct account
{
	int num;
	string name;
	double money;
};

void balance(account& men)
{
	cout << "Введите новый баланс: ";
	cin >> men.money;

}

int main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	account men;
	cout << "Введите номер счёта: ";
	cin >> men.num;
	cout << "Введите имя владельца: ";
	cin >> men.name;
	cout << "Введите баланс: ";
	cin >> men.money;
	balance(men);
	cout << "Ваш счёт: " << men.name << ", " << men.num << ", " << men.money<<endl;

	system("pause");

	return 0;
}