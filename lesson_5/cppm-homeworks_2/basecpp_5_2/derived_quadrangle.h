#pragma once
#include"base_class.h"

class Rectangle :public Quadrangle {
public:

	Rectangle(uint32 a, uint32 b)
		:Quadrangle(a, b, a, b, 90, 90, 90, 90, "Прямоугольник") {
	}
};

class Square :public Quadrangle {
public:

	Square(uint32 a)
		:Quadrangle(a, a, a, a, 90, 90, 90, 90, "Квадрат") {
	}
};

class Parallelogram :public Quadrangle {
public:

	Parallelogram(uint32 a, uint32 b, uint32 A, uint32 B)
		:Quadrangle(a, b, a, b, A, B, A, B, "Параллелограмм") {
	}
};

class Rhomb :public Quadrangle {
public:

	Rhomb(uint32 a, uint32 A, uint32 B)
		:Quadrangle(a, a, a, a, A, B, A, B, "Ромб") {
	}
};