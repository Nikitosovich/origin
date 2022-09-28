#pragma once
#include <format>
#include"Figure.h"
#include"FigureException.h"

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
		if ((A + B + C) != 180) {
			std::string str = format("{} (стороны {}, {}, {}; углы {}, {}, {}) не был создан. Причина: сумма углов не равна 180\n",
				name, a, b, c, A, B, C);
			throw FigureException(str);
		}
	}

	std::string f_format();
	virtual std::string print_string();
};
