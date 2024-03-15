/*
Найти все числа в диапазоне [1,1000], у которых нечетное кол-во делителей
(Все идеальные квадраты)
*/
#include <iostream>
#include <cmath>

using namespace std;

const int limit = 1000;

int divs(int n)
{
    int c=0;
    for (int i=1;i<pow(n,0.5)+1;i++)
    {
        if (n%i==0){
            c++;
            if (i!=n/i)
                c++;
        }

    }
    return c;
}

int main()
{

    for (int i=1;i<=limit;i++)
    {
        int a=divs(i);
        if (a%2!=0)
        {
            cout << i << "\t";
        }
    }
    return 0;
}

