#include <iostream>
#include <cmath>

//шахматный слон

int main()
{
    using namespace std;

    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (abs(a1-a2)==abs(b1-b2))
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}

