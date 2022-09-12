#include <iostream>
#include<string>

class Figure {
private:
	unsigned int sides_count;
	std::string name;
public:
	Figure() {
		this->sides_count = 0;
		this->name = "Фигура";
	}

	Figure(unsigned int count, std::string name) {
		this->sides_count = count;
		this->name = name;
	}

	unsigned int get_sides_count() {
		return this->sides_count;
	}

	std::string get_name() {
		return this->name;
	}
};
class Triangle :public Figure {
public:
	Triangle()
		: Figure(3, "Треугольник") {
	}
};
class Quadrangle :public Figure {
public:
	Quadrangle() :Figure(4, "Четырёхугольник") {
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Figure Fig;
	Triangle Tri;
	Quadrangle Quad;

	std::cout << "Количество сторон:" << std::endl;
	std::cout << Fig.get_name() << ": " << Fig.get_sides_count() << std::endl;
	std::cout << Tri.get_name() << ": " << Tri.get_sides_count() << std::endl;
	std::cout << Quad.get_name() << ": " << Quad.get_sides_count() << std::endl;
	
	system("pause");
	return 0;
}

