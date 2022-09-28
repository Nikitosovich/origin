#pragma once
#include"Triangle.h"

class Right_triangle : public Triangle {
public:

	Right_triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B)
		:Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник") {
		;
	}
};