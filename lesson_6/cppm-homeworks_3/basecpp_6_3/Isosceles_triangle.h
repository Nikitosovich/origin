#pragma once
#include"Triangle.h"

class Isosceles_triangle : public Triangle {
public:

	Isosceles_triangle(uint32 a, uint32 b, uint32 A, uint32 B)
		:Triangle(a, b, a, A, B, A, "Равнобедренный треугольник") {
		;
	}
};
