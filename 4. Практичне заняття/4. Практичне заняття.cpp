#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int m, n, k = 0, i, j;
	cout << "Creating matrix m x n elements" << endl;
	cout << "Enter m=";
	cin >> m;
	cout << "Enter n=";
	cin >> n;
	int** matrix = new int* [m];
	for (i = 0; i <= m; i++)
		matrix[i] = new int[n];
	int* out = new int[m];

	srand((unsigned)time(0));

	for (i = 0; i < m; i++)
	{
		out[i] = 0;
		for (j = 0; j < n; j++)
		{
			matrix[i][j] = rand() % 10;
			if (i % 2 != 0)
			{
				out[k] += matrix[i][j];
			}
		}
		if (i % 2 != 0)
			k++;
	}
	for (i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	cout << "=======================" << endl;
	for (i = 0; i < k; i++)
		cout << out[i] << " ";
	delete[] matrix, out;
	return 0;
}
