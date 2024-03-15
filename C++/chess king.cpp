#include <iostream>
#include <cmath>

//шахматный король

int main()
{
    using namespace std;
    int a1,a2; //1<=a1<=8; 1<=a2<=8
    int b1,b2; //1<=b1<=8; 1<=b2<=8

    cin >> a1 >> a2 >> b1 >> b2;

    if (abs(a1-b1)<=1 && abs(a2-b2)<=1)
        cout << "YES";
    else
        cout << "NO";


    return 0;

}
