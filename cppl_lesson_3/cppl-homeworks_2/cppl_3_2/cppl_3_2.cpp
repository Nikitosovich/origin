#include <iostream>

class smart_array {
private:
	int* ptr_arr;
	int counter = 0;
	int elements;
public:

	smart_array(int elements) {
		this->elements = elements;
		ptr_arr = new int[elements];
		if (ptr_arr == nullptr)
		{
			throw std::exception("Не создан массив");
		}
	}

	~smart_array() {
		delete[] ptr_arr;
		ptr_arr = nullptr;
		int b = 0;
	}

	void operator=(const smart_array& object) {
		this->counter = object.counter;
		this->elements = object.elements;
		delete[] ptr_arr;
		ptr_arr = new int[elements];
		for (size_t i = 0; i < elements; i++)
		{
			ptr_arr[i] = object.ptr_arr[i];
		}
	}

	void add_element(int value) {
		if (counter < elements)
		{
			ptr_arr[counter] = value;
			counter++;
		}
		else {
			throw std::exception("Выход за пределы массива");
		}
	}

	int get_element(int index) {
		if (index < elements) {
			return ptr_arr[index];
		}
		else {

			throw std::exception("Не корректный индекс");
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	try {
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		
		smart_array new_array(2);
		new_array.add_element(44);
		new_array.add_element(34);

		arr = new_array;
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}