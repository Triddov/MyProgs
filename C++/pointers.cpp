#include <iostream>
#include <cmath>
#include <string>

int main()
{
    using namespace std;

    int n=10;
    int A[n]={1,2,3,4,5,6,7,8,9,10};


    int *p=&A[0];

    for (int i=0;i<n;i++)
    {
        cout << *p << " ";
        p++;
    }


    return 0;
}
