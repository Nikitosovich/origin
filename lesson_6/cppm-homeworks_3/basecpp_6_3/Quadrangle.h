#pragma once
#include <format>
#include"Figure.h"

class Quadrangle :public Figure {
protected:
	uint32 a, b, c, d, A, B, C, D;
public:
	Quadrangle(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		: Quadrangle(a, b, c, d, A, B, C, D, "Четырехугольник") {
		;
	}
	Quadrangle(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D, std::string name) :Figure(name) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}

	std::string f_format();
	virtual std::string print_string(); 
};
