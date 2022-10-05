
#include <iostream>
#include <variant>
#include <string>
#include <vector>

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

int main()
{
	std::variant<int, std::string, std::vector<int>> result;
	std::string* pVal;
	result = get_variant();
	if (std::holds_alternative<int>(result))
		std::cout << std::get<int>(result) * 2;
	else if ((pVal = std::get_if<std::string>(&result)) != nullptr)
		std::cout << *pVal;
	else {
		try
		{
			std::vector<int> vec = std::get<std::vector<int>>(result);
			for (int num : vec) {
				std::cout << num << ", ";
			}
		}
		catch (const std::bad_variant_access& ex) { /*error*/ }
	}

	return 0;
}

