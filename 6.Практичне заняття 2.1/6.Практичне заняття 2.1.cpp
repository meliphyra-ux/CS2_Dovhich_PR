#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

struct Hours
{
	int hour;
	int minute;
	int sec;
};

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int p;
	int b;
	int t;
	ifstream fin("D:\\input_data.txt");
	Hours* oden;
	oden = new Hours[2];
	for (int i = 0; i < 2; i++)
		fin >> oden[i].hour >> oden[i].minute >> oden[i].sec;
	for (int i = 0; i < 2; i++)
	{
		p = oden[0].hour + oden[1].hour;
		b = oden[0].minute + oden[1].minute;
		t = oden[0].sec + oden[1].sec;
	}
	{
		if (b % 60 == 0)
		{
			b = b % 60;
			p++;
		}
		if (t % 60 == 0)
		{
			t = t % 60;
			b++;
		}
	}
	cout << p <<" Годин "<< b <<" Хвилин "<< t << " Секунд ";
	
}
