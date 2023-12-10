#include <iostream>
#include <clocale>
using namespace std;
/*Вариант 11.
Дана матрица размера M*N и целое число K (1<=K<=N). 
Удалить строку матрицы с номером K*/
int main()
{
    setlocale(LC_ALL, "ru");
    int M, N,k;
    cout << "Введите количество строк";
    cin >> M;
    cout << "Введите количество столбцов";
    cin >> N;
    cout << "Введите K";
    cin >> k;
    int** arr = new int*[M];
    //Объявление массива
    for (int i = 0; i < M; i++)
    {
        arr[i] = new int[N];
    }
    for (int i = 0; i < M; i++)
    //Заполнение массива
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    //Вывод матрицы без строки K
    for (int i = 0; i < M; i++) 
    {
     
        for (int j = 0; j < N; j++) 
        {
       
            if (i != k-1)
            {
                cout << arr[i][j];
            }
        }
      
   }

}

