#pragma once
#include"Quadrangle.h"

class Rhomb :public Quadrangle {
public:

	Rhomb(uint32 a, uint32 A, uint32 B)
		:Quadrangle(a, a, a, a, A, B, A, B, "Ромб") {
		;
	}
};