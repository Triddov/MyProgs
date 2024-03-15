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
            cin >> A[i][j];
        }
    }

    bool yes=true;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i!=j and A[i][j] != A[j][i])
            {
                yes = false;
                break;
            }
        }
    }

    if (yes == true){
        cout << "YES";
    }else
    {
        cout << "NO";
    }

    return 0;
}

