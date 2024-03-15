#include <iostream>
/*
Алгоритм insert sort - ~N**2
*/

int main()
{
    using namespace std;
    int n=10;
    int A[n];

    for (int i=0;i<n;i++)
    {
        cin >> A[i];
    }

    for (int i=1;i<n;i++)
    {
        while (i>0 and A[i-1]>A[i])
        {
            int tmp = A[i];
            A[i]=A[i-1];
            A[i-1]=tmp;
            i--;
        }
    }

    for (int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
