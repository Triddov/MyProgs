#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <utility>
#include <C:\Users\Степан\Desktop\Cods\c++\123.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <pair <string,string>> A(n);

    for (int i=0;i<n;i++)
    {
        string tmp1;
        string tmp2;
        cin >> tmp1 >> tmp2;
        A[i]={tmp1,tmp2};
    }

    string request;
    cin >> request;


    for (auto now:A)
    {
        if (request==now.first)
            cout << now.second;
        else if (request==now.second)
            cout << now.first;
    }

    return 0;
}
