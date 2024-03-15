#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>

int main()
{
    using namespace std;

    int n;
    cin >> n;

    int A[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            A[i][j] = abs(i-j);
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}
