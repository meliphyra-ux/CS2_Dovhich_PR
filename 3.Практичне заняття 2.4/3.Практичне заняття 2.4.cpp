#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    const int n = 20;
   int mas[n], sum;
    sum = 0;



    for (int i = 0; i < n; i++)
    {
        mas[i]= rand() % (100 - 1) + 1;
        cout << "mas[" << i << "]= " <<mas[i] << endl;
        
    }

    for (int i = 0; i < n; i++)
    {
        if (mas[i] % 2 == 1)
            sum += mas[i];
    }

    cout << "Sum:" << sum;
    return 0;
}
