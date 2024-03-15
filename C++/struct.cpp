#include <iostream>

const int count_students = 5;

struct Student{

    int16_t age;
    int16_t group;
    std::string name;

};

void* print_student(const Student &x){

        std::cout << x.age << " "
                  << x.group << " "
                  << x.name << "\n";
}

int main(){

    Student *my_group = new Student[count_students];

    for(int i=0;i<count_students ;i++){

        my_group[i].age = 15+i;
        my_group[i].group = 1488+i;
        my_group[i].name = "Dima";
    }

    for(int i=0;i<count_students ;i++){
        print_student(my_group[i]);
    }

    return 0;
}

