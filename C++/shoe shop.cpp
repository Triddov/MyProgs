#include <iostream>
#include <cmath>
/*
В обувном магазине продается обувь разного размера.
Известно, что одну пару обуви можно надеть на другую, если она хотя бы на три размера больше.
В магазин пришел покупатель.
Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так, чтобы он смог надеть их все одновременно.
Сначала вводится размер ноги покупателя (обувь меньшего размера он надеть не сможет), затем количество пар обуви в магазине и размер каждой пары.
Размер — натуральное число, не превосходящее 100, количество пар обуви в магазине не превосходит 1000.
*/

using namespace std;

int main()
{
    float minR;
    int n;
    cin >> minR >> n;
    float A[n];

    if (0==n)
    {
        return minR;
    }

    float num;
    for (int i=0;i<n;i++)
    {
        cin >> num;
        A[i]=num;
    }

    bool is_sorted = false;

    while (is_sorted == false){
        int i=0;
        is_sorted = true;
        while (i<n-1){
            if (A[i] > A[i+1]){

                int tmp = A[i];
                A[i] = A[i+1];
                A[i+1] = tmp;
                is_sorted = false;
            }
            i++;
        }
    }

    int ans=0;

    for (int i=0;i<n;i++)
    {
        if (minR<=A[i] or 0==minR)
        {
            minR = A[i];
            ans++;
            break;
        }
    }

    for (int i=0;i<n;i++)
    {
        if (minR+3<=A[i])
        {
            ans++;
            minR = A[i];
        }
    }
    cout << ans;

    return 0;
}

