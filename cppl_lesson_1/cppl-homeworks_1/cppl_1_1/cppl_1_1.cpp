#include <iostream>
#include <vector>
#include <algorithm>

using std::for_each;
int main() {

	std::vector<int> vec{
		4, 7, 9, 14, 12
	};

	int count = 0;
	for_each(vec.begin(), vec.end(), [&vec, count](int num)mutable {
		if (num % 2 != 0)
		{
			num *= 3;
			vec[count] = num;
		}
		std::cout << vec[count] << " ";
		++count;
		});

	return 0;
}
