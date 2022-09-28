#include"Triangle.h"

std::string Triangle::f_format() {
	std::string str = format("{} (стороны {}, {}, {}; углы {}, {}, {}) создан\n", get_name(), a, b, c, A, B, C);
	
	return str;
}

std::string Triangle::print_string() {
	return f_format();
}