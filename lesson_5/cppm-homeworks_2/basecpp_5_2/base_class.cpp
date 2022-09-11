#include <iostream>
#include "base_class.h"

unsigned int Figure::get_sides_count() {
	return this->sides_count;
}
std::string Figure::get_name() {
	return this->name;
}

uint32* Triangle::get_sides()
{
	uint32 arr[] = { this->a,this->b,this->c };
	return arr;
}

uint32* Triangle::get_angles()
{
	uint32 arr[] = { this->A,this->B,this->C };
	return arr;
}

uint32* Quadrangle::get_sides()
{
	uint32 arr[] = { this->a,this->b,this->c,this->d };
	return arr;
}

uint32* Quadrangle::get_angles()
{
	uint32 arr[] = { this->A,this->B,this->C,this->D };
	return arr;
}