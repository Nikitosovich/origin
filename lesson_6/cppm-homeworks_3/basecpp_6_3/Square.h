#pragma once
#include"Quadrangle.h"

class Square :public Quadrangle {
public:

	Square(uint32 a)
		:Quadrangle(a, a, a, a, 90, 90, 90, 90, " вадрат") {
		;
	}
};
