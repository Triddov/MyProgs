#include <iostream>
#include <cmath>

//шахматный конь

int main()
{
    using namespace std;

    int a1,a2;
    int b1,b2;
    cin >> a1 >> b1 >> a2 >> b2;

    bool cond1 = (abs(a1-a2)==1 && abs(b1-b2)==2);
    bool cond2 = (abs(a1-a2)==2 && abs(b1-b2)==1);

    if (cond1==true || cond2==true)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}
