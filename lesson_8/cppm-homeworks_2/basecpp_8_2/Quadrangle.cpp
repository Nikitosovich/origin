#include"Quadrangle.h"

std::string Quadrangle::f_format() {
	std::string str = format("{} (стороны {}, {}, {}, {}; углы {}, {}, {}, {}) создан\n", get_name(), a, b, c, d, A, B, C, D);
	return str;
}
std::string Quadrangle::print_string() {
	return f_format();
}