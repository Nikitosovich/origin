#pragma once
#include"base_class.h"

class Right_triangle : public Triangle {
public:

	Right_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B)
		:Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник") {
	}
};

class Isosceles_triangle : public Triangle {
public:

	Isosceles_triangle(uint32 a, uint32 b, uint32 A, uint32 B)
		:Triangle(a, b, a, A, B, A, "Равнобедренный треугольник") {
	}
};

class Equilateral_triangle : public Triangle {
public:

	Equilateral_triangle(uint32 a,uint32 A)
		:Triangle(a, a, a, A, A, A, "Равносторонний треугольник") {
	}
};

