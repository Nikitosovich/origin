#pragma once
#include"base_class.h"

class Rectangle :public Quadrangle {
public:
	Rectangle(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Ïğÿìîóãîëüíèê") {

	}
	virtual bool check()const
	{
		if (!check_base_quad())
			return false;

		if (this->A == 90 && this->C == 90 && this->B == 90 && this->D == 90 && this->a == this->c && this->b == this->d) {
			return true;
		}
		return false;
	}
};

class Square :public Quadrangle {
public:
	Square(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Êâàäğàò") {

	}
	virtual bool check()const
	{
		if (!check_base_quad())
			return false;

		if (this->A == 90 && this->C == 90 && this->B == 90 && this->D == 90) {
			return true;
		}
		return false;
	}
};

class Parallelogram :public Quadrangle {
public:
	Parallelogram(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Ïàğàëëåëîãğàìì") {

	}

	virtual bool check()const
	{
		if (!check_base_quad())
			return false;

		if (this->A == this->C && this->B && this->D && this->a == this->c && this->b == this->d) {
			return true;
		}
		return false;
	}
};

class Rhomb :public Quadrangle {
public:
	Rhomb(uint32 a, uint32 b, uint32 c, uint32 d, uint32 A, uint32 B, uint32 C, uint32 D)
		:Quadrangle(a, b, c, d, A, B, C, D, "Ğîìá") {

	}
	virtual bool check()const
	{
		if (!check_base_quad())
			return false;

		if (this->A == this->C && this->B && this->D && this->a == this->c == this->b == this->d) {
			return true;
		}
		return false;
	}
};