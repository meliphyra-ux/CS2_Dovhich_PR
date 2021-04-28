#include <iostream>
#include <time.h>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    double a;
    double x;
    double c = 0;
    const int size = 10;
    int matrix[size];

    for (int i = 0; i < size; i++)
        cin >> matrix[i];
    for (int i = 0; i < size; i++) 
    {
       
       a =  log2(matrix[i]);
       double f = modf(a, &x);
       if (f == c)
       {
           cout << "Normal number:" << endl;
           cout << matrix[i] << endl;
       }
       else
       {
           cout << "" ;
       }
    }
    
    system("pause");
    return 0;
}
