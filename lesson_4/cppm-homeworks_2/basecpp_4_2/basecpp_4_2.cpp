#include <iostream>
#include <fstream>
#include <string>
#include <format>
using namespace std;
#define NO_ERROR 0
#define CRITICAL_ERROR -1


class address {
private:
	string city, street;
	int house, apartment;
public:
	address(string city, string street, int house, int apartment) {
		this->city = city;
		this->street = street;
		this->house = house;
		this->apartment = apartment;

	}
	string get_city()
	{
		return this->city;
	}

	string get_output_address() {
		string str = format("{}, {}, {}, {}", city, street, house, apartment);
		return str;
	}
};

void sort(address** adr, int size) {
	for (size_t i = 0; i < size; i++) {
		for (size_t j = i + 1; j < size; j++) {
			int num = strcmp(adr[i]->get_city().c_str(), adr[j]->get_city().c_str());
			if (num > 0) {
				swap(adr[i], adr[j]);
			}
		}
	}
}

int read_file(address**& adr, int& N) {
	string city, street;
	int house, apartment;
	ifstream infile("in.txt", ios::binary);
	if (!infile.is_open()) {
		cout << "Ошибка открытия фаила" << endl;
		return CRITICAL_ERROR;
	}
	else {
		cout << "Фаил открыт" << endl;
		infile >> N;
		adr = new address * [N];

		for (size_t i = 0; i < N; ++i) {
			infile >> city;
			infile >> street;
			infile >> house;
			infile >> apartment;
			adr[i] = new address{ city,street,house,apartment };
		}
	}
	infile.close();
	return NO_ERROR;
}
int main()
{
	setlocale(LC_ALL, "ru");

	address** adr = nullptr;
	int N = 0;
	int err = read_file(adr, N);
	if (err == CRITICAL_ERROR)
		return 0;

	sort(adr, N);

	ofstream outfile("out.txt");
	outfile << N << endl;
	for (int i = 0; i < N; ++i) {
		auto address_t = adr[i];
		string str = address_t->get_output_address();
		outfile << str << endl;
	}
	outfile.close();

	for (size_t i = 0; i < N; i++)
		delete adr[i];
	delete[] adr;

	system("pause");
	return 0;
}