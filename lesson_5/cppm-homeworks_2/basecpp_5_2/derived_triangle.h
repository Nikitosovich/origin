#pragma once
#include"base_class.h"

class Right_triangle : public Triangle {
public:
	Right_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Прямоугольный треугольник") {

	}
};

class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Равнобедренный треугольник") {

	}
};

class Equilateral_triangle : public Triangle {
public:
	Equilateral_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		:Triangle(a, b, c, A, B, C, "Равносторонний треугольник") {

	}
};

