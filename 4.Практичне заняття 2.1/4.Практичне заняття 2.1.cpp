
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int n = 4;
	const int m = 4;

	int matrix[n][m] = {};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = i + j;
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}