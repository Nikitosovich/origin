#include"Figure.h"
#include"FigureException.h"

Figure::Figure(std::string name) {
	this->name = name;
}
Figure::Figure(uint32 sides_count) {
	this->name = "������";
	if (sides_count != 0) {
		std::string str = format("{} (���������� ������: {}) �� �������. �������: ���������� ������ �� ����� 0\n",
			this->name, std::to_string(sides_count));
		throw FigureException(str);
	}
	this->sides_count = sides_count;
}
std::string Figure::get_name() {
	return this->name;
}
std::string Figure::print_string() {
	return format("{} (���������� ������: {}) �������\n",
		this->name, std::to_string(sides_count));;
}