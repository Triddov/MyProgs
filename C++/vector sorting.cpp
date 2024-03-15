#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main()
{

    int count_members; // <=1000
    cin >> count_members;

    vector <pair <int,int>> members_list(count_members);

    for(int i=0;i<count_members;i++)
    {
        int number;
        int mark;
        cin >> number >> mark; // <=10**5
        members_list[i] = {mark*(-1),number};
    }

    sort(members_list.begin(),members_list.end());

    for (auto now: members_list)
    {
        cout << now.second << " " << abs(now.first) << "\n";
    }


    return 0;
}

