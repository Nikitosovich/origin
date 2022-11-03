#include <iostream>
#include <vector>

template<class T>
T my_sqrt(T a) {
	return a * a;
}

template<class T>
std::vector<int> my_sqrt(std::vector<int> & a) {
	for (int i = 0; i < a.size(); ++i)
		a[i] *= a[i];
	return a;
}

int main()
{
	std::cout << "[IN]: 4" << std::endl;
	std::cout << "[OUT]: " << my_sqrt(4) << "\n";

	std::cout << "[IN]: -1 4 8"<< std::endl;
	std::vector<int> vec = { -1,4,8 };
	std::cout << "[OUT]: " ;
	my_sqrt<std::vector<int>>(vec);
	for (auto i : vec) {
		std::cout << i << " ";
	}

	return 0;
}

