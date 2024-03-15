#include <iostream>

// шахматная ладья

int main()
{
    using namespace std;
    int a1,a2;
    int b1,b2;

    cin >> a1 >> b1 >> a2 >> b2;

    if (a1==a2 || b1==b2)
        cout << "YES";
    else
        cout << "NO";


    return 0;

}
