#pragma once
#include<string>
typedef unsigned int uint32;

class Figure {
protected:
	uint32 sides_count;
	std::string name;
	void print_t(bool check_t) const {
		if (!check_t) {
			std::cout << "Неправильная\n";
		}
		else {
			std::cout << "Правильная\n";
		}
		std::cout << "Количество сторон: " << get_sides_count() << "\n";\
	}

public:

	Figure(std::string name) {
		this->name = name;
		this->sides_count = 0;
	}
	Figure(unsigned int count) {
		this->sides_count = count;
		this->name = "Фигура";
	}
	Figure(unsigned int count, std::string name) {
		this->sides_count = count;
		this->name = name;
	}

	uint32 get_sides_count()const;
	std::string get_name()const;

	virtual void print_info()const
	{
		std::cout << get_name() << ":\n";
		bool check_t = check();
		print_t(check_t);
		std::cout << "\n";
	}
	virtual bool check()const
	{
		if (this->get_sides_count() == 0) {
			return true;
		}
		return false;
	};

};

class Triangle :public Figure {
protected:
	uint32 a, b, c, A, B, C;
public:
	Triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		: Triangle(a, b, c, A, B, C, "Треугольник") {
	}
	Triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C, std::string name) :Figure(3, name) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
	uint32* get_sides();
	uint32* get_angles();

	virtual void print_info()const
	{
		std::cout << get_name() << ":\n";
		bool check_t = check();
		print_t(check_t);
		std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl << std::endl;
	}

	bool check_base_tri()const {
		if (this->get_sides_count() == 3 && (this->A + this->B + this->C) == 180) {
			return true;
		}
		return false;
	}

	virtual bool check()const
	{
		return check_base_tri();
	}
};

class Quadrangle :public Figure {
protected:
	uint32 a, b, c, d, A, B, C, D;
public:
	Quadrangle(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		: Quadrangle(a, b, c, d, A, B, C, D, "Четырехугольник") {
	}
	Quadrangle(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D, std::string name) :Figure(4, name) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	uint32* get_sides();
	uint32* get_angles();

	virtual void print_info()const
	{
		std::cout << get_name() << ":\n";
		bool check_t = check();
		print_t(check_t);
		std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl << std::endl;
	}

	bool check_base_quad()const {
		if (this->get_sides_count() == 4 && (this->A + this->B + this->C + this->D) == 360) {
			return true;
		}
		return false;
	}

	virtual bool check()const
	{
		return check_base_quad();
	}
};

