#include <iostream>

int main()
{
    using namespace std;

    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;

    bool cond1 = (a1==a2 || b1==b2);
    bool cond2 = (abs(a1-a2)==abs(b1-b2));

    if (cond1==true || cond2==true)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
