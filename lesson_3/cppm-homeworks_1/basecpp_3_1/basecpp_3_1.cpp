#include <iostream>
using namespace std;

class Calcucator
{
private:
	double num1, num2;
public:
	bool set_num1(double num1) {
		bool result = false;
		if (num1 != 0) {
			this->num1 = num1;
			result = true;
		}
		return result;
	}
	bool set_num2(double num2) {
		bool result = false;
		if (num2 != 0) {
			this->num2 = num2;
			result = true;
		}
		return result;
	}
	double add() {
		double result = num1 + num2;
		return result;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double multiply() {
		return num1 * num2;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}


};

int main()
{
	setlocale(LC_ALL, "ru");

	Calcucator calc;
	
	while (true)
	{
		double x = 0;
		cout << "Введите num1: ";
		cin >> x;
		if (calc.set_num1(x))
			break;
		else cout << "не верное число\n";

	}

	while (true)
	{
		double y = 0;
		cout << "Введите num2: ";
		cin >> y;
		if (calc.set_num2(y))
			break;
		else cout << "не верное число\n";

	}
	cout << "num1 + num2 = " << calc.add() << endl;
	cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
	cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
	cout << "num1 * num2 = " << calc.multiply() << endl;
	cout << "num1 / num2 = " << calc.divide_1_2() << endl;
	cout << "num2 / num1 = " << calc.divide_2_1() << endl;
	system("pause");
	return 0;
}

