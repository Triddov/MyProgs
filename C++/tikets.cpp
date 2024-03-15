#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>

int main()
{
    using namespace std;

    int n,m;
    int k;
    int b;
    cin >> n >> m;

    int A[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> A[i][j];
        }
    }

    cin >> k;

    int c=0;

    for(int i=0;i<n;i++)
    {
        c=0;

        for(int j=0;j<m;j++)
        {
            if (A[i][j]==0){
                c++;
                if (c==k){
                    b=c;
                    cout << i+1;
                    return 0;
                }
            }
            else
            {
                c=0;
            }
        }
    }

    if (b!=k)
        cout << 0;

    return 0;
}
