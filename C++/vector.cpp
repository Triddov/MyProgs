#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;


int main()
{
    vector <int> A;
    int n;
    cin >> n;
    int a;

    for (int i=0;i<n;i++)
    {
        cin >> a;
        A.push_back(a);
    }

    sort(A.begin(),A.end());

    for (auto now:A)
    {
        cout << now << " ";
    }

    return 0;
}

