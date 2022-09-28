#include <iostream>
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "Figure.h"
#include "FigureException.h"

void print(Figure* figure)
{
	std::cout << figure->print_string() << std::endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	try {
		Figure fig(0);
		print(&fig);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Triangle triangle(10, 20, 30, 50, 160, 70);
		print(&triangle);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Right_triangle right_triangle(10, 20, 30, 50, 40);
		print(&right_triangle);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Isosceles_triangle isosceles_triangle(15, 20, 50, 80);
		print(&isosceles_triangle);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Equilateral_triangle equilateral_triangle(30, 60);
		print(&equilateral_triangle);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
		print(&quadrangle);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Rectangle rectangle(10, 20);
		print(&rectangle);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Square square(20);
		print(&square);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Parallelogram parallelogram(20, 30, 30, 40);
		print(&parallelogram);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	try {
		Rhomb rhomb(30, 30, 40);
		print(&rhomb);
	}
	catch (FigureException& ex) {
		std::cout << ex.what() << "\n";
	}

	system("pause");
	return 0;
}