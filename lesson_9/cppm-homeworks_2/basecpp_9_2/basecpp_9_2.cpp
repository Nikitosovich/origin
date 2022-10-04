#include <iostream>
#include<string>
#include<format>

class Fraction
{
private:
	int numerator_;   //числитель
	int denominator_; //знаменатель
	int a = 0, b = 0, all_denominator = 0;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	int gcd(int a, int b) {
		a = abs(a), b = abs(b);
		if (b == 0)return a;
		else return gcd(b, a % b);
	}

	void sokrdrob(int* a, int* b) {
		int x = gcd(*a, *b);
		*a /= x;
		*b /= x;
	}

	void ff(Fraction& other) {
		all_denominator = this->denominator_ * other.denominator_;
		a = this->numerator_ * other.denominator_;
		b = other.numerator_ * this->denominator_;
	}

	std::string operator+(Fraction other) {
		ff(other);
		int c = a + b;
		sokrdrob(&c, &all_denominator);
		std::string str = format("{}/{}", std::to_string(c), std::to_string(all_denominator));
		return str;
	}

	std::string operator-(Fraction other) {
		ff(other);
		int c = a - b;
		sokrdrob(&c, &all_denominator);
		std::string str = format("{}/{}", std::to_string(c), std::to_string(all_denominator));
		return str;
	}

	std::string operator*(Fraction other) {
		all_denominator = this->denominator_ * other.denominator_;
		a = this->numerator_ * other.numerator_;
		sokrdrob(&a, &all_denominator);
		std::string str = format("{}/{}", std::to_string(a), std::to_string(all_denominator));
		return str;
	}

	std::string operator/(Fraction other) {

		a = this->numerator_ * other.denominator_;
		b = this->denominator_ * other.numerator_;
		sokrdrob(&a, &b);
		std::string str = format("{}/{}", std::to_string(a), std::to_string(b));
		return str;
	}

	//префиксная форма
	Fraction operator++() {
		this->numerator_ += this->denominator_;
		return *this;
	}

	Fraction operator--() {
		this->numerator_ -= this->denominator_;
		return *this;
	}

	// постфиксная форма
	Fraction operator++(int) {
		Fraction temp{ *this };
		++(*this);
		return temp;
	}

	Fraction operator--(int) {
		Fraction temp(*this);
		--(*this);
		return temp;
	}

	//унарный минус
	Fraction operator-() {
		numerator_ *= -1;
		return *this;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	int x2, y2, x1, y1;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> x1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> y1;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> x2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> y2;

	Fraction f1(x1, y1);
	Fraction f2(x2, y2);

	std::cout << x1 << "/" << y1 << " + " << x2 << "/" << y2 << " = " << f1 + f2 << '\n';
	std::cout << x1 << "/" << y1 << " - " << x2 << "/" << y2 << " = " << f1 - f2 << '\n';
	std::cout << x1 << "/" << y1 << " * " << x2 << "/" << y2 << " = " << f1 * f2 << '\n';
	std::cout << x1 << "/" << y1 << " / " << x2 << "/" << y2 << " = " << f1 / f2 << '\n';

	std::cout << "++" << x1 << "/" << y1 << " * " << x2 << "/" << y2 << " = " << ++f1 * f2 << '\n';
	std::cout << "--" << x1 << "/" << y1 << " * " << x2 << "/" << y2 << " = " << --f1 * f2 << '\n';
	std::cout << x1 << "/" << y1 << "++ * " << x2 << "/" << y2 << " = " << f1++ * f2 << '\n';
	std::cout << x1 << "/" << y1 << "-- * " << x2 << "/" << y2 << " = " << f1-- * f2 << '\n';

	std::cout << "-("<<x1 << "/" << y1<<") + " << x2 << "/" << y2 << " = " << -f1 + f2 << '\n';

	return 0;
}