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

    vector <int> A;
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }

    set <int> B;


    for(int i=0;i<n;i++){

        if (B.find(A[i]) != B.end()) //если уже есть такой элемент
        {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

        B.insert(A[i]);
    }


    return 0;
}

