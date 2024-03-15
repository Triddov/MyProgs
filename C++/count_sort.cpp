#include <iostream>
/*
алгоритм count sort - ~N

не рабочий
*/

using namespace std;

int max_el(int A[],int n)
{
    int max=-1000000;
    for (int i=0;i<n;i++)
    {
        if (A[i]>max)
        {
            max = A[i];
        }
    }
    return max+1;
}

int main()
{
    int n=10;
    int A[n]={1,2,3,4,5,1,2,3,4,5};

    int B[max_el(A,n)]={0};

    for (int i=0;i<n;i++){
        B[A[i]]++;
    }

    for (int i=0;i<max_el(A,n);i++)
    {
        cout << B[i]*i << " ";
    }

    return 0;
}
