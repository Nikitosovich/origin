#pragma once
#include<string>
typedef unsigned int uint32;

class Figure {
private:
	uint32 sides_count;
	std::string name;
public:
	Figure(std::string name) {
		this->name = name;
	}
	Figure(unsigned int count) {
		this->sides_count = count;
		if (count <= 2)
		{
			this->name = "Фигура";
		}
	}
	Figure(unsigned int count, std::string name) {
		this->sides_count = count;
		this->name = name;
	}

	std::string get_name();
	uint32 get_sides_count();
};

class Triangle :public Figure {
private:
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
	uint32* get_sides();
	uint32* get_angles();
};

class Quadrangle :public Figure {
private:
	uint32 a, b, c, d, A, B, C, D;
public:
	Quadrangle(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		: Quadrangle(a, b, c, d, A, B, C, D, "Четырехугольник") {
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
	uint32* get_sides();
	uint32* get_angles();
};

