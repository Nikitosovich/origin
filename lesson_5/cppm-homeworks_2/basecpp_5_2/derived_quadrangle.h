#pragma once
#include"base_class.h"

class Rectangle :public Quadrangle {
public:

	Rectangle(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Прямоугольник") {
	}

	virtual std::string print_string() {
		std::string result = "";
		if ((this->A != 90) ||
			(this->B != 90) ||
			(this->C != 90) ||
			(this->D != 90) ||
			(this->a != this->c) ||
			(this->b != this->d)) {
			this->~Rectangle();
		}
		else {
			result = f_format();
		}
		return result;
	}
};

class Square :public Quadrangle {
public:

	Square(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Квадрат") {
	}

	virtual std::string print_string() {
		std::string result = "";
		if ((this->A != 90) ||
			(this->B != 90) ||
			(this->C != 90) ||
			(this->D != 90) ||
			(this->a != this->b) ||
			(this->b != this->c) ||
			(this->c != this->d) ||
			(this->d != this->a)) {
			this->~Square();
		}
		else {
			result = f_format();
		}
		return result;
	}
};

class Parallelogram :public Quadrangle {
public:

	Parallelogram(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Параллелограмм") {
	}

	virtual std::string print_string() {
		std::string result = "";
		if ((this->A != this->C) ||
			(this->B != this->D) ||
			(this->a != this->c) ||
			(this->b != this->d)) {
			this->~Parallelogram();
		}
		else {
			result = f_format();
		}
		return result;
	}
};

class Rhomb :public Quadrangle {
public:

	Rhomb(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Ромб") {
	}

	virtual std::string print_string() {
		std::string result = "";
		if ((this->A != this->C) ||
			(this->B != this->D) ||
			(this->a != this->b) ||
			(this->b != this->c) ||
			(this->c != this->d) ||
			(this->d != this->a)) {
			this->~Rhomb();
		}
		else {
			result = f_format();
		}
		return result;
	}
};