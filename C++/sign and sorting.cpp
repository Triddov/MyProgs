#include <iostream>
#include <cmath>


int main()
{
    using namespace std;

    int n;
    cin >> n;
    int A[n];

    for (int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        A[i]=a;
    }

    for (int i=0;i<n-1;i++)
    {
        if ((A[i]>0 and A[i+1]>0) or (A[i]<0 and A[i+1]<0))
        {
            if (A[i]>A[i+1])
            {
                cout << A[i+1] << " " << A[i];
            }else
            {
                cout << A[i] << " " << A[i+1];
            }
        break;
        }
    }

    return 0;
}
