#include <iostream>
#include <cmath>
#include <string>

int main()
{
    using namespace std;

    int n=154;
    float r=0.5;
    float i;
    float q=1.25*pow(10,-6);

    while(true){
        cin >> i;

        float b = (0.7155417*q*n*(i/r))*1000;

        cout <<"answer - "<< b << "\n";
    }

    return 0;
}
