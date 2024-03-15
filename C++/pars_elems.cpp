#include <iostream>

int main()
{
    using namespace std;

    int n;
    cin >> n;
    int A[n];

    for (int i=0;i<n;i++)
    {
        cin >> A[i];
    }

    int c=0;
    for (int i=0;i<n;i++)
    {
       for (int j=0;j<i;j++)
       {
           if (A[i]==A[j])
            c++;
       }
    }
    cout << c;

    return 0;
}
