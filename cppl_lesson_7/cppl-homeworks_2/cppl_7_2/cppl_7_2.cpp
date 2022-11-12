#include <iostream>
#include <set>

int main()
{
	int num = 0;
	int count = 0;
	std::set<int,std::greater<int>> my_set;
	std::cout << "[IN]:" << std::endl;
	std::cin >> count;
	for (int i = 0; i < count; ++i) {
		std::cin >> num;
		my_set.insert(num);
	}

	std::cout << "[OUT]:" << std::endl;
	for (const auto& elem : my_set) {
		std::cout << elem << std::endl;
	}

	return 0;
}
