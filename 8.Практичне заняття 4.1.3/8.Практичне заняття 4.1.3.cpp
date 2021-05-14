#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i, n;
	string a;
	string filename;
	ofstream f;
	cin >> filename;
	f.open("D:\\" + filename, ios::out);
	cout << "n = "; cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Write word: ";
	
		cin >> a;
		f << a << " ";
	}
	f.close();
	system("pause");
	return 0;
}
