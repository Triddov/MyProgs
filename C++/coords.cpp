#include <iostream>
#include <cmath>

double coords(double x1, double x2, double y1, double y2)
{
    double ans;

    if (x1==x2){
        ans = abs(y1)+abs(y2);
        return ans;
    }
    if (y1==y2){
        ans = abs(x1)+abs(x2);
        return ans;
    }
    if (x1!=x2 and y1!=y2)
    {
        ans = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        return ans;
    }
}


int main()
{
    using namespace std;

    double x1,y1;
    double x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;

    cout << coords(x1,x2,y1,y2);

    return 0;
}
