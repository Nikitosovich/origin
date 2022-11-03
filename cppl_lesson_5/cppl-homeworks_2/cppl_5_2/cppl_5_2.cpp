#include <iostream>
#include <vector>


template<typename T>
class Matrix {
public:

	Matrix(int rows, int columns) {
		this->rows = rows;
		this->columns = columns;
		m_data = new T* [rows];
		for (int i = 0; i < rows; ++i) {
			m_data[i] = new T[columns];
		}
		for (int i = 0; i < rows; ++i)
			for (int j = 0; j < columns; ++j)
				m_data[i][j] = 0;
	}
	~Matrix() {
		for (int i = 0; i < rows; ++i) {
			delete[] m_data[i];
		}
		delete[] m_data;
		m_data = nullptr;
	}

	T* operator[] (int index_row) {
		return m_data[index_row];
	}
	const T* operator[] (int index_row) const {
		return m_data[index_row];
	}


private:
	int rows{};
	int columns{};
	T** m_data{};
};

int main()
{
	Matrix<int> arr2(2, 2);
	auto test = Matrix<double>(2, 3);
	arr2[1][0] = 7;
	arr2[0][1] = 8;
	test[0][0] = 4;
	std::cout << "test[0][0] = " << test[0][0] << std::endl;
	std::cout <<"arr2[1][0] = " << arr2[1][0] << std::endl;
	std::cout <<"arr2[0][1] = " << arr2[0][1];

	return 0;
}

