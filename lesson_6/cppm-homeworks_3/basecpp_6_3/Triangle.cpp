#include"Triangle.h"

std::string Triangle::f_format() {
	std::string str = format("{}:\nСтороны: a = {} b = {} c = {}\n", get_name(), std::to_string(a), std::to_string(b), std::to_string(c));
	str += format("Углы: A = {} B = {} C = {}\n", std::to_string(A), std::to_string(B), std::to_string(C));
	return str;
}

std::string Triangle::print_string() {
	return f_format();
}