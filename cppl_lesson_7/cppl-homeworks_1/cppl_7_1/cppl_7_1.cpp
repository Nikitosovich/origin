#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <format>

/*Сортируем по убыванию*/
bool pred(const std::pair<char, int>& a, const std::pair<char, int>& b) {
	return a.second > b.second;
}

void print(std::vector< std::pair< int, int >>& vec) {
	std::cout << "[IN]: Hello world!!" << std::endl << "[OUT]:" << std::endl;
	for (auto i : vec) {
		std::cout << std::format("{}: {}\n", static_cast<char>(i.first), i.second);
	}
}

/*1. Получаем уникальные значения из строки в контейнер set.
  2. Создадим map с ключем уникальных символов и количеством его повторений в строке */
std::map<char, int> count_characters(const std::string& str) {
	std::set<char> myset;

	for (auto char_string : str) {
		myset.insert(char_string);
	}

	std::map<char, int> mymap;
	int count = 0;
	for (auto char_set : myset) {
		for (auto char_string : str) {
			if (char_string == char_set) {
				++count;
			}
		}
		mymap[char_set] = count;
		count = 0;
	}
	return mymap;
}

int main()
{
	std::string str = "Hello world";
	/*std::string str = "aaaaajjjm";*/
	std::map<char, int> mymap = count_characters(str);

	std::vector< std::pair< int, int > > vec(mymap.begin(), mymap.end());
	std::sort(vec.begin(), vec.end(), pred);

	print(vec);

	return 0;
}

