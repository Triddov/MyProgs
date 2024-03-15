#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    using namespace std;

    string a;
    cin >> a;

    string b = a;
    reverse(b.begin(),b.end());

    if (a==b){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}
