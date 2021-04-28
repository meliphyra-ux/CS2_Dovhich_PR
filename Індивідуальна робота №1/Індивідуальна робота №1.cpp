#include <iostream>
#include <time.h>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    int a;
    const int size = 100;
    int matrix[size];
    srand(time(NULL));
    // заполнение матрицы ГСЧ
    for (int i = 0; i < size; i++) {
        matrix[i] = 1 + rand() % 4000;
        cout << matrix[i] << " ";
    }
    system("pause");
    // вот тут вставляете сортировку Шелла
    // вывод матрицы
    for (int i = 0; i < size; i++) {
       a =  log2(matrix[i]);
       
       if (a % 2)
       {
           cout << matrix[i] << endl;
       }
       else
       {
           system("pause");
       }
    }
    system("pause");
    return 0;
}
