#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    /*В двумерном массиве целых чисел посчитать сумму элементов: в каждой строке; в каждом
    столбце; одновременно по всем строкам и всем столбцам.*/

    const int size = 10;
    int arr[size][size], arrsumm[size];
    int summ = 0;
    for (int i = 0; i < size; i++) {
        arrsumm[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
            summ += arr[i][j];
            arrsumm[j] = arrsumm[j] + arr[i][j];

         
        }
        cout << " | " << summ << endl;
        summ = 0;
    }
    
    cout << "--------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << arrsumm[i] << "\t";
        summ += arrsumm[i];
    }
    cout << " | " << summ;





}
