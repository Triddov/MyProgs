#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int Sum(int a,int ans)
{
    if (a!=0)
    {
        ans+=a;
        cin >> a;
        Sum(a,ans);
    }else{
        return ans;
    }

}

int main()
{
    using namespace std;

    int a;
    cin >> a;
    int ans=0;

    cout << Sum(a,ans);


    return 0;
}
