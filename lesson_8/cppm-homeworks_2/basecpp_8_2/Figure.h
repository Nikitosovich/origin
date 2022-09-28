#pragma once
#include<string>
#include<format>
typedef unsigned int uint32;

class Figure {
private:
	uint32 sides_count;
	std::string name;
public:
	Figure(std::string);
	Figure(uint32 sides_count);
	std::string get_name();
	virtual std::string print_string();
};