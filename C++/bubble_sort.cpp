#include <iostream>
/*
Алгоритм bubble sort - ~N**2
*/

int main()
{
    using namespace std;

    int n; 
    cin >> n;
    int A[n] = {0};

    for (int i=0;i<n;i++){
        int num;
        cin >> num;
        A[i] = num;
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
    for (int i=0;i<n;i++)
    {
        cout << A[i] << "\t";
    }

    return 0;
}
