#include <iostream>

int main()
{
    using namespace std;

    int a,b,c;
    cin >> a >> b >> c;

    if (a==b && b==c)
    {
        cout << 3;
    }else if (a==b || b==c || c==a)
    {
        cout << 2;
    }else{
        cout << 0;
    }

    return 0;
}
