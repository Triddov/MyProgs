#include <iostream>
#include <cmath>


int main()
{
    using namespace std;

    int n,m;
    int x,y;
    cin >> n >> m >> x >> y;

    if (n>m)
    {
        int tmp = n;
        n=m;
        m=tmp;
    }

    int coor_x = x>abs(n-x)? abs(n-x):x;
    int coor_y = y>abs(m-y)? abs(m-y):y;

    int ans = coor_x>coor_y? coor_y:coor_x;

    cout << ans;

    return 0;
}
