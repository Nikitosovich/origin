#include <iostream>
#include <vector>
#include <algorithm>

class Array {
private:
	std::vector<int> m_arr{ 0 };
	int counter;

public:
	Array(std::vector<int> arr) :m_arr(arr), counter(0) {
	}

	int get_sum() {

		int sum = 0;
		int counter = 0;
		std::for_each(m_arr.begin(), m_arr.end(), [&sum, &counter](int x) {
			if (x % 3 == 0) {
				sum += x;
				++counter;
			}
			});
		this->counter = counter;
		return sum;
	}

	int get_count() {
		return counter;

	}
};

class Functor {
public:
	Functor() :sum(0), counter(0) {
	}
	void operator()(int num) {
		if (num % 3 == 0) {
			sum += num;
			++counter;
		}
	}
	int sum;
	int counter;
};

int get_sum(Functor& functor, std::vector<int> arr) {
	functor = std::for_each(arr.begin(), arr.end(), Functor());
	return functor.sum;
}
int get_count(Functor& functor) {
	return functor.counter;
}

int main()
{
	std::vector<int> arr{ 4,1,3,6,25,54 };

	{
		Functor functor;
		std::cout << "First variant:\n";
		std::cout << "[IN]: ";
		for (auto i : arr) {
			std::cout << i << " ";
		}
		std::cout << std::endl;
		std::cout << "[OUT]: get_sum() = " << get_sum(functor, arr) << std::endl;
		std::cout << "[OUT]: get_count() = " << get_count(functor) << std::endl << std::endl;
	}


	std::cout << "Second variant:\n";
	std::cout << "[IN]: ";
	for (auto i : arr) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	Array f(arr);
	int sum = f.get_sum();
	std::cout << "[OUT]: get_sum() = " << sum << std::endl;
	int counter = f.get_count();
	std::cout << "[OUT]: get_count() = " << counter << std::endl;

	return 0;
}