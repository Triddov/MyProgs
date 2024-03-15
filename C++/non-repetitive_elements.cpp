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

    vector <int> A;
    for (int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        A.push_back(a);
    }

    vector <int> B;

    for (auto now:A)
    {
        int *p = &now;
        if (count(A.begin(),A.end(),now)==1)
            cout << *p << " ";
    }

    return 0;
}
