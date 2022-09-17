#pragma once
#include<string>
typedef unsigned int uint32;

class Figure {
private:
	uint32 sides_count;
	std::string name;
public:
	Figure(std::string);
	std::string get_name();
	virtual std::string print_string();
};