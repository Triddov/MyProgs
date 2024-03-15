#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    using namespace std;

    vector<int> A;
    int n = 200;

    for (int i=0;i<n;i++)
    {
        if (i>=int('a') and i<=int('z')){
            A.push_back(i);
        }
    }

    reverse(A.begin(),A.end());

    for (int i=0;i<26;i++)
    {
        cout << char(A[i]) << " ";
    }



    return 0;
}
