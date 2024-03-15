#include <iostream>
#include <cmath>
#include <string>

int main()
{
    using namespace std;
    char a;
    cin >> a;

    auto c=int(a);

    if (c>='0' and c<='9')
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
