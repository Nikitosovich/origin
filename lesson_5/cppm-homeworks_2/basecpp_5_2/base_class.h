#pragma once
#include<string>
#include <format>
typedef unsigned int uint32;

class Figure {
private:
	uint32 sides_count;
	std::string name;
public:
	Figure(std::string name) {
		this->name = name;
	}

	std::string get_name() {
		return this->name;
	}
	uint32 get_sides_count() {
		return this->sides_count;
	}
	virtual std::string print_string() {
		return "";
	}
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

	virtual std::string print_string() {
		std::string str = format("{}:\nСтороны: a = {} b = {} c = {}\n", get_name(), std::to_string(a), std::to_string(b), std::to_string(c));
		str += format("Углы: A = {} B = {} C = {}\n", std::to_string(A), std::to_string(B), std::to_string(C));
		return str;
	}
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

	virtual std::string print_string() {
		std::string str = format("{}:\nСтороны: a = {} b = {} c = {} d = {}\n", get_name(), std::to_string(a),
			std::to_string(b), std::to_string(c), std::to_string(d));
		str += format("Углы: A = {} B = {} C = {} D = {}\n", std::to_string(A), std::to_string(B),
			std::to_string(C), std::to_string(D));
		return str;
	}
};

