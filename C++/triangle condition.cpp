#include <iostream>

int main()
{
    using namespace std;
    int a,b,c;
    cin >> a >> b >> c;

    if (a+b > c && b+c > a && a+c > b)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}
