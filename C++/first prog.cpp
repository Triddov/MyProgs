#include <iostream> //библиотека потокового ввода-вывода

int main()
{
    using namespace std; //пространство имен
    int age; //объявление переменной. неопределенное состояние
    string name;

    cout << "hello. ur name?\n";
    cin >> name;
    cout << "hi," << name << ". ur age?\n";
    cin >> age;
    cout << "yeah? not " << age-1 << "?\n";
    cout << "Cool!";

    return 0;
}
