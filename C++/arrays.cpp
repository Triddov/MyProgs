#include <iostream>
/*
Создание массива с любым вводимым кол-вом символов(до 1000) и сортировка его по возрастанию
(Самый простой и долгий алгоритм - N**3)
*/


int main()
{
    using namespace std;

    const int MAX_SIZE = 1000;
    int A[MAX_SIZE];
    int top = 0; //реальный конечный индекс массива (верхушка)

    int num;
    cin >> num;
    while (num!=0){
        A[top++] = num;
        cin >> num;
    }

    int i=0;
    while (i<top-1){
        if (A[i] > A[i+1]){
            int tmp = 0;
            tmp = A[i];
            A[i] = A[i+1];
            A[i+1] = tmp;
            i=0;
        }else{
            i++;
        }
    }


    for (int i=0;i<top;i++){
        cout << A[i] << "; ";
    }

    return 0;
}
