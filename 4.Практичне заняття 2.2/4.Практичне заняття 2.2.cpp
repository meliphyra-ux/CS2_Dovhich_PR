#include <iostream>
#include <iomanip> 
using namespace std;
 
int main()
{

	const int n = 3;
 setlocale(LC_ALL, "rus");
 
 int matrix[n][n] = {};
 int sum[n] = {}; 
 int columnS[n] = {}; 
 
 cout << "Заполните матрицу " << n << 'х' << n << " числами построчно.\n";
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < n; j++)
 {
 cout << i + 1 << "-я строка ";
 cout << j + 1 << "-й столбец: ";
 cin >> matrix[i][j];
 }
 cout << endl;
 }
 

 for (int i = 0; i < n; i++)
 {
 cout << " | ";
 for (int j = 0; j < n; j++)
 {
 cout << setw(4) << matrix[i][j] << "  ";
 sum[i] += matrix[i][j]; 
 columnS[i] += matrix[j][i];
 }
 cout << "|" << endl;
 }
 
 cout << "\nСумма по строкам!\n";
 for (int i = 0; i < n; i++)
 {
 cout << i + 1 << "-я строка: " << sum[i] << endl;
 }
 
 cout << "\nСумма по столбцам!\n";
 for (int i = 0; i < n; i++)
 {
 cout << i + 1 << "-й столбец: " << columnS[i] << endl;
 }
 return 0;
}