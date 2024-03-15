#include <iostream>
#include <string>

using namespace std;

int main(){

    string example_string;
    cin >> example_string;

    int length_string = example_string.size();
    int tmp,i,j;

    for(i=0, j=length_string-1; i<j; i++, j--){
        tmp = example_string[i];
        example_string[i] = example_string[j];
        example_string[j] = tmp;
    }

    cout << example_string << "\n";
    system("PAUSE");

    return 0;

}

