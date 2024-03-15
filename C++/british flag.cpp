#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    int n;
    cin >> n;
    string A[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            A[i][j]=".";
        }

    }

    int s;
    if (n%2==0)
    {
        s=n/2;
    }else{
        s=ceil(n/2);
    }

    for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                A[i][s]="*";
                A[s][j]="*";

                if (n%2==0){
                   A[i][s-1]="*";
                    A[s-1][j]="*";
                }
                if (i==j or j==n-i-1){
                    A[i][j]="*";
                }
            }
        }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << A[i][j] << " ";
            if (j==n-1)
            {
                cout << "\n";
            }
        }
    }

    return 0;
}
