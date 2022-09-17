#pragma once
#include <format>
#include"Figure.h"

class Triangle :public Figure {
protected:
	uint32 a, b, c, A, B, C;
public:
	Triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C)
		: Triangle(a, b, c, A, B, C, "Треугольник") {
	}
	Triangle(uint32 a, uint32 b, uint32 c, uint32 A, uint32 B, uint32 C, std::string name) :Figure(name) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}

	std::string f_format();
	virtual std::string print_string();
};
