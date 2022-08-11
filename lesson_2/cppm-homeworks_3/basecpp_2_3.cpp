#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct account
{
	string countries;
	string cities;
	string street;
	string house_number;
	int apartment_number;
	int index;
};

void OutOnConcole(account& const num)
{
	cout << "Страна: "         << num.countries << endl;
	cout << "Город: "          << num.cities << endl;
	cout << "Улица: "          << num.street << endl;
	cout << "Номер дома: "     << num.house_number << endl;
	cout << "Номер квартиры: " << num.apartment_number << endl;
	cout << "Индекс: "         << num.apartment_number << endl<<endl;
}

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	account num1 = { "Росиия", "Москва", "Арбат", "12", 8, 123456 };
	account num2 = { "Росиия", "Ижевкс", "Пушкина", "59", 143, 953769 };
	
	OutOnConcole(num1);
	OutOnConcole(num2);
	
	system("pause");
    return 0;
}