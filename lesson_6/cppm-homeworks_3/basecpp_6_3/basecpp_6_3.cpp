#include <iostream>
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

void print(Figure* figure)
{
	std::cout << figure->print_string() << std::endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	Triangle triangle(10, 20, 30, 50, 60, 70);
	Right_triangle right_triangle(10, 20, 30, 50, 60);
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	Equilateral_triangle equilateral_triangle(30, 60);

	print(&triangle);
	print(&right_triangle);
	print(&isosceles_triangle);
	print(&equilateral_triangle);

	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

	print(&quadrangle);
	print(&rectangle);
	print(&square);
	print(&parallelogram);
	print(&rhomb);

	system("pause");
	return 0;
}