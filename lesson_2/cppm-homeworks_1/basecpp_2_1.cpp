#include <iostream>
using namespace std;

enum months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December,
};

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 0;
	while (true)
	{
		cout << "Введите номер мясяца: ";
		cin >> a;
		if (a <= 0) {
			cout << "До свидания"<<endl;
			break;
		}
		switch (a)
		{

		case static_cast<int>(months::January):cout << "Январь" << endl;
			break;
		case static_cast<int>(months::February):cout << "Февраль" << endl;
			break;
		case March:cout << "Март" << endl;
			break;
		case April:cout << "Апрель" << endl;
			break;
		case(May):cout << "Май" << endl;
			break;
		case(June):cout << "Июнь" << endl;
			break;
		case(July):cout << "Июль" << endl;
			break;
		case(August):cout << "Август" << endl;
			break;
		case(September):cout << "Сентябрь" << endl;
			break;
		case(October):cout << "Остябрь" << endl;
			break;
		case(November):cout << "Ноябрь" << endl;
			break;
		case(December):cout << "Декабрь" << endl;
			break;
		default: cout << "Неправильный номер!"<<endl;
		}
	}
	system("pause");
	return 0;
}
