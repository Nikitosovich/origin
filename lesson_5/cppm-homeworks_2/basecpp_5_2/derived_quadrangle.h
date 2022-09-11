#pragma once
#include"base_class.h"

class Rectangle :public Quadrangle {
public:
	Rectangle(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Прямоугольник") {

	}
};

class Square :public Quadrangle {
public:
	Square(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Квадрат") {

	}
};

class Parallelogram :public Quadrangle {
public:
	Parallelogram(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Параллелограмм") {

	}
};

class Rhomb :public Quadrangle {
public:
	Rhomb(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Ромб") {

	}
};