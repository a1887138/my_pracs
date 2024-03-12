#include <iostream>
#include "workshop.h"

int main() {

    double test_val = 10;
    double* test_point = &test_val;

    std::cout << "Beofre: " << *test_point << "." << std::endl;

    changeValue(test_point);

    std::cout << "Aftre: " << *test_point << "." << std::endl;


    double array[10] = {1,1,1,1,1,1,1,1,1,11};

    printArray(array, 10);

    std::cout << arrayMax(array, 10) << std::endl;


    double* newarray = dynamicArray(23, 7);

    printArray(newarray,23);

    std::cout << arrayMax(newarray, 23) << std::endl;

    delete(newarray);

    return 0;
}