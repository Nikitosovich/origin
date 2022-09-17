#include"Quadrangle.h"

std::string Quadrangle::f_format() {
	std::string str = format("{}:\nСтороны: a = {} b = {} c = {} d = {}\n", get_name(), std::to_string(a),
		std::to_string(b), std::to_string(c), std::to_string(d));
	str += format("Углы: A = {} B = {} C = {} D = {}\n", std::to_string(A), std::to_string(B),
		std::to_string(C), std::to_string(D));
	return str;
}
std::string Quadrangle::print_string() {
	return f_format();
}