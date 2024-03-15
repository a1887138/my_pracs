#include <iostream>

extern double* duplicateArray(double* array, int size);

int main () {

    // Init
    double array[10] = {9,8,7,6,5,4,3,-3,5,1003};

    // Debug outputs and run function
    std::cout << &array << ", " << array[4] << std::endl;

    double* new_array = duplicateArray(array, 10);

    std::cout << &new_array << ", " << new_array[4] << std::endl;

    return 0;
}