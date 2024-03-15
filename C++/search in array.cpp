#include <iostream>
#include <cstdlib>

//поиск заданного числа в массиве
//возвращает место первого подходящего элемента (-1 - отсутствие заданного элемента)

using namespace std;

int search_in_array(int A[], int N, int x)
{
    for (int i=0;i<N;i++)
    {
        if (A[i]==x)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int N = 250;
    int x;

    int A[N];
    for (int i=0;i<N;i++)
    {
        A[i]=(rand()%1000)/2;
    }

    for (int i=0;i<N;i++)
    {
        cout << A[i] << " ";
    }

    while (true){
        cout << "\n" << "what number to search?" << "\n";
        cin >> x;
        cout << "index of number in array: " << search_in_array(A,N,x);
    }

    return 0;
}
