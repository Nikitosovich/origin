#pragma once
#include"Triangle.h"

class Equilateral_triangle : public Triangle {
public:

	Equilateral_triangle(uint32 a, uint32 A)
		:Triangle(a, a, a, A, A, A, "Равносторонний треугольник") {
		;
	}
};