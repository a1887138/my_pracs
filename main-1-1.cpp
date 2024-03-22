#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main () {

    int number = 5;

    Person * array = createPersonArray(number);

    std::cout << array[0].name << std::endl;

    return 0;
}