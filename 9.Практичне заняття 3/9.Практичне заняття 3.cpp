#include <iostream> 

using namespace std;

int main()
{
    const int n = 5;
    int m[n] = { 30, 50, 20, 10, 40 };


    for (int i = 0; i < n - 1; ++i)
    {
        int j = i;

        for (int p = i + 1; p < n; ++p)
        {

            if (m[p] < m[j])

                j = p;
        }


        swap(m[i], m[j]);
    }


    for (int c = 0; c < n; ++c)
        cout << m[c] << ' ';

    return 0;
}