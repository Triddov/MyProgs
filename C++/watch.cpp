#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int all_sec;
    cin >> all_sec;

    int hours = all_sec/60/60%24;
    int mins = all_sec/60%60;
    int sec = all_sec%60;

    cout << hours << ":" << mins/10 << mins%10 << ":" << sec/10 << sec%10;

    return 0;
}
