#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

struct Kvar
{
	string name;
	string metro;
	int quantity;
	int shekel;
};

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n = 0;
	ifstream fin("D:\\input_data.txt");
	Kvar* oden;
	fin >> n;
	oden = new Kvar[n];
	for (int i = 0; i < n; i++)
	{
		fin >> oden[i].name >> oden[i].metro >> oden[i].quantity >> oden[i].shekel;
	}
	for (int i = 0; i < n; i++)
	{
		cout << oden[i].name << "Owner \n" << oden[i].metro << " Metro \n" << oden[i].quantity << " Rooms \n" << oden[i].shekel << " hryvna per day\n" << endl;
	}
}
