#include <iostream>
#include <cmath>
using namespace std;
double NCD(double num, int);
int main()
{
	double integrer,fr,num;
	int n = 10, i = 100;
	int f;
	cin >> num;
	fr = modf(num, &integrer);
	if (fr < 1 && fr > 0.1)
	{
		num = (num * 10);
		f = NCD(num, n);
		num /= f;
		n /= f;
		cout << num << "/" << n << endl;
	}
	if (fr < 0.1)
	{
		num = (num * 100);
		f = NCD(num, i);
		num /= f;
		i /= f;
		cout << num << "/" << i << endl;
	}
	else
	{
		exit(0);
	}
	
	return 0;

}

double NCD(double num, int n)
{
if (num == n) {
	return num;
}
if (num > n) {
	long tmp = num;
	num = n;
	n = tmp;
}
return NCD(num, n - num);
}