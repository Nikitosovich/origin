#include <iostream>
#include <string>
#include "base_class.h"
#include "derived_triangle.h"
#include "derived_quadrangle.h"

void print_info_triangle(Triangle fig);
void print_info_quadrangle(Quadrangle fig);

int main()
{
	setlocale(LC_ALL, "ru");

	Triangle triangle(10, 20, 30, 50, 60, 70);
	Right_triangle right_triangle(10, 20, 30, 50, 60, 90);
	Isosceles_triangle isosceles_triangle(10, 20, 10, 50, 60, 50);
	Equilateral_triangle equilateral_triangle(30, 30, 30, 60, 60, 60);

	print_info_triangle(triangle);
	print_info_triangle(right_triangle);
	print_info_triangle(isosceles_triangle);
	print_info_triangle(equilateral_triangle);

	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
	Square square(20, 20, 20, 20, 90, 90, 90, 90);
	Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
	Rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);

	print_info_quadrangle(quadrangle);
	print_info_quadrangle(rectangle);
	print_info_quadrangle(square);
	print_info_quadrangle(parallelogram);
	print_info_quadrangle(rhomb);

	system("pause");
	return 0;
}

void print_info_triangle(Triangle fig) {
	uint32* pArrS = fig.get_sides();
	uint32* pArrA = fig.get_angles();
	uint32 a = pArrS[0];
	uint32 b = pArrS[1];
	uint32 c = pArrS[2];
	uint32 A = pArrA[0];
	uint32 B = pArrA[1];
	uint32 C = pArrA[2];

	std::cout << fig.get_name() << ":\n" << "Стороны: a = " << a << " b = " << b << " c = " << c << std::endl;
	std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl << std::endl;
}

void print_info_quadrangle(Quadrangle fig) {
	uint32* pArrS = fig.get_sides();
	uint32* pArrA = fig.get_angles();
	uint32 a = pArrS[0];
	uint32 b = pArrS[1];
	uint32 c = pArrS[2];
	uint32 d = pArrS[3];
	uint32 A = pArrA[0];
	uint32 B = pArrA[1];
	uint32 C = pArrA[2];
	uint32 D = pArrA[3];

	std::cout << fig.get_name() << ":\n" << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
	std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl << std::endl;
}
