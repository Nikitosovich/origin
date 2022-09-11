#pragma once
#include"base_class.h"

class Right_triangle : public Triangle {
public:
	Right_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Прямоугольный треугольник") {
	}

	virtual bool check()const
	{
		if (!check_base_tri())
			return false;

		if (this->C == 90) {
			return true;
		}
		return false;
	}
};

class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Равнобедренный треугольник") {
	}
	virtual bool check()const
	{
		if (!check_base_tri())
			return false;

		if (this->A == this->C && this->a == this->c) {
			return true;
		}
		return false;
	}
};

class Equilateral_triangle : public Triangle {
public:
	Equilateral_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Равносторонний треугольник") {
	}
	virtual bool check()const
	{
		if (!check_base_tri())
			return false;

		if (this->A == 60 && this->C == 60 && this->B == 60) {
			return true;
		}
		return false;
	}
};

