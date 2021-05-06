
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int n = 7;

	int matrix[n][n] = {};
	int sum[n] = {}; 
	int sumM = 0; 

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		cout << " | ";
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = 10 + rand() % 91;
			cout << setw(4) << matrix[i][j] << "  ";
		}
		cout << "|" << endl;
	}

	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum[i] += matrix[i][j];
		}
	}

	cout << "\nСумма по строкам!\n";
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "-я строка: " << sum[i] << endl;
	}

	for (int i = 1; i < n; i++)
	{
		if (sum[i] > sum[sumM])
		{
			sumM = i;
		}
	}

	cout << "Строка, сумма элементов которой максимальна: " << sumM + 1;
	cout << endl << endl;

	return 0;
}