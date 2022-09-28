#pragma once
#include"Quadrangle.h"

class Parallelogram :public Quadrangle {
public:

	Parallelogram(uint32 a, uint32 b, uint32 A, uint32 B)
		:Quadrangle(a, b, a, b, A, B, A, B, "ֿאנאככוכמדנאלל") {
		;
	}
};
