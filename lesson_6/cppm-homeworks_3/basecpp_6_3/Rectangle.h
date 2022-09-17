#pragma once
#include"Quadrangle.h"

class Rectangle :public Quadrangle {
public:

	Rectangle(uint32 a, uint32 b)
		:Quadrangle(a, b, a, b, 90, 90, 90, 90, "Прямоугольник") {
		;
	}
};
