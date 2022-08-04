#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int N, M;
	ifstream infile("in.txt");
	
	if (!infile.is_open())
	{
		cout << "Нет фаила" << endl;
		return 0;
	}

	ofstream outfile("out.txt");
	infile >> N;
	int* mass = new int[N];
	for (int i = 0; i < N; ++i)
	{
		infile >> mass[i];
	}

	infile >> M;
	int* mass1 = new int[M];
	for (int i = 0; i < M; ++i)
	{
		infile >> mass1[i];
	}

	outfile << M;
	outfile << endl;
	outfile << *(mass1 + 5) << " ";
	for (int i = 0; i < (M - 1); ++i)
	{
		outfile << mass1[i] << " ";
	}
	outfile << endl;

	outfile << N;
	outfile << endl;
	for (int i = 0; i < (N - 1); ++i)
	{
		outfile << mass[i + 1] << " ";
	}
	outfile << mass[0];

	delete[] mass;
	delete[] mass1;

	outfile.close();
	infile.close();

	return 0;
}

