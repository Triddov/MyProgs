#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    int a;
    cin >> a;

    for (int i=2;i<=a;i++)
    {
        if (a%i==0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}

