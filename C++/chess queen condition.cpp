#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>

int main()
{
    using namespace std;

    int A[8][8];

    for (int i=0;i<8;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin >> A[i][j];
        }
    }


    for (int i=0;i<8;i++)
    {
        for (int j=0;j<2;j++)
        {
            cout << A[i][j] << " ";
        }

        int c=0;
        for (int j=0;j<2;j++)
        {
            bool cond1 = (A[i][j]==A[i+1][j] || A[i][j+1]==A[i+1][j+1]);
            bool cond2 = (abs(A[i][j]-A[i+1][j])==abs(A[i][j+1]-A[i+1][j+1]));
            if (cond1==true || cond2==true)
                c++;
        }
        if (0==c or 1==c)
            cout << "no";
        if (2==c)
            cout << "yes";
        cout << "\n";
    }

    return 0;
}
