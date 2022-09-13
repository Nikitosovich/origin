#pragma once
#include"base_class.h"

class Right_triangle : public Triangle {
public:

	Right_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Прямоугольный треугольник") {
	}

	virtual std::string print_string() {
		std::string result = "";
		if (this->C != 90) {
			this->~Right_triangle();
		}
		else {
			result = f_format();
		}
		return result;
	}
};

class Isosceles_triangle : public Triangle {
public:

	Isosceles_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Равнобедренный треугольник") {
	}

	virtual std::string print_string() {
		std::string result = "";
		if (this->A != this->C || this->a != this->c) {
			this->~Isosceles_triangle();
		}
		else {
			result = f_format();
		}
		return result;
	}
};

class Equilateral_triangle : public Triangle {
public:

	Equilateral_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Равносторонний треугольник") {
	}

	virtual std::string print_string() {
		std::string result = "";
		if ((this->A != 60) || 
			(this->C != 60) ||
			(this->B != 60) || 
			(this->a != this->b) || 
			(this->b != this->c) ||
			(this->c != this->a)) {
			this->~Equilateral_triangle();
		}
		else {
			result = f_format();
		}
		return result;
	}
};

