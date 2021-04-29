#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{

	const int m = 20;
	int n[m];
	for (int i = 0; i < m; i++)
	{
		n[i] = rand() % 100;
		cout << "Massiv: " << n[i] << endl;
	}
	
	int max = n[0];//Помещаем значения 1-го элемента
	int min = n[0];//массива в переменные
	for (int r = 1; r < m; r++)
	{
		if (max < n[r]) max = n[r]; //если значение элемента больше значения переменной max, то записываем это значение в переменную
		if (min > n[r]) min = n[r]; //аналогично и для min
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

}