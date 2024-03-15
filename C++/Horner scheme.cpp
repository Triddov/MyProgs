#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdlib>

int main()
{
    using namespace std;

    int n; //n<=20
    double x;

    cin >> n;
    cin >> x;

    vector <double> A;

    for(int i=0;i<n+1;i++){
        double tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    double ans = 0;

    if (0==n){
        ans = A[0];
        cout << ans;
        return 0;
    }

    if (n>0 and A.size()>1){
    ans += A[0]*x + A[1];
    }

    if (n>1 and A.size()>2){
        for(int i=2;i<A.size();i++){
            ans*=x;
            ans+=A[i];
        }
    }

    cout << ans;

    return 0;
}

