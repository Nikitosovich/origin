#include <iostream>
#include <fstream>
#include <string>
#include <format>
using namespace std;


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

	string get_output_address() {
		/*string str = city + ", " + street + ", " + to_string(house)+", "+to_string(apartment);*/
		string str = format("{}, {}, {}, {}", city, street, house, apartment);
		return str;
	}
};

int main()
{
	string city, street;
	int house, apartment;
	setlocale(LC_ALL, "ru");
	address** adr = nullptr;
	int N = 0;
	ifstream infile("in.txt", ios::binary);
	if (!infile.is_open()) {
		cout << "Ошибка открытия фаила" << endl;
		return 0;
	}
	else {
		cout << "Фаил открыт" << endl;
		infile >> N;
		adr = new address * [N];
		for (size_t i = 0; i < N; ++i)
		{
			infile >> city;
			infile >> street;
			infile >> house;
			infile >> apartment;
			adr[i] = new address{ city,street,house,apartment };
		}
	}

	infile.close();

	ofstream outfile("out.txt");
	outfile << N << endl;
	for (int i = N-1; i >= 0; --i) {
		auto address_t = adr[i];
		string str = address_t->get_output_address();
		outfile << str << endl;
	}

	for (size_t i = 0; i < N; i++)
		delete adr[i];
	delete[] adr;

	system("pause");
	return 0;
}

