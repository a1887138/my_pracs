#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main () {

    int number = 5;

    PersonList array = createPersonList(number);

    std::cout << array.people[0].name << std::endl;
    std::cout << array.people[0].age << std::endl;

    return 0;
}