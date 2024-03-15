#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;


int fib(int n)
{
    int A[n];
    A[0]=1;
    A[1]=1;
    for (int i=2;i<n;i++)
    {
        A[i]=A[i-2]+A[i-1];
    }

    return A[n-1];

}

int main()
{
    int n;
    cin >> n;

    cout << fib(n);


    return 0;
}
