#include <iostream>
#include <limits.h>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator==(Fraction other) {
		if ((this->numerator_ == other.numerator_) && (this->denominator_ == other.denominator_))
			return true;
		else
			return false;
	}
	bool operator!=(Fraction other) {
		return !(*this == other);
	}
	bool operator<(Fraction other) {
		if (((this->numerator_ < other.numerator_) && (this->denominator_ >= other.denominator_))||
			((this->numerator_ == other.numerator_) && (this->denominator_ > other.denominator_)))
			return true;
		else
			return false;
	}
	bool operator>(Fraction other) {
		return !(*this < other);
	}
	bool operator<=(Fraction other) {
		return !(*this > other);
	}
	bool operator>=(Fraction other) {
		return !(*this < other);
	}
};

int main()
{
	/*Fraction f1(4, 3);
	Fraction f2(6, 11);*/

	Fraction f1(1, INT_MAX );
	Fraction f2(1, INT_MAX - 1);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}