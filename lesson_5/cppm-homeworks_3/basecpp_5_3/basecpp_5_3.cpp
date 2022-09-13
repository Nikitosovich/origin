#include <iostream>
#include <string>
#include "base_class.h"
#include "derived_triangle.h"
#include "derived_quadrangle.h"

void print(Figure& fig)
{
	fig.print_info();
}

int main()
{
	setlocale(LC_ALL, "ru");

	Figure figure(1);
	print(figure);

	Triangle triangle(10, 20, 30, 50, 60, 60);
	Right_triangle right_triangle(10, 20, 30, 50, 40, 90);
	Isosceles_triangle isosceles_triangle(10, 20, 10, 50, 60, 50);
	Equilateral_triangle equilateral_triangle(30, 30, 30, 60, 60, 60);
	
	print(triangle);
	print(right_triangle);
	print(isosceles_triangle);
	print(equilateral_triangle);

	Quadrangle quadrangle(10, 20, 30, 40, 90, 90, 90, 80);
	Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
	Square square(20, 20, 20, 20, 90, 90, 90, 90);
	Parallelogram parallelogram(20, 30, 20, 30, 80, 100, 80, 100);
	Rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);

	print(quadrangle);
	print(rectangle);
	print(square);
	print(parallelogram);
	print(rhomb);

	system("pause");
	return 0;
}
