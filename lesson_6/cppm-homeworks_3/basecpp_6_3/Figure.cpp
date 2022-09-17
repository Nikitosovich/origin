#include"Figure.h"

Figure::Figure(std::string name) {
	this->name = name;
}
std::string Figure::get_name() {
	return this->name;
}
std::string Figure::print_string() {
	return "";
}