#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main () {

    // Init
    double array[10] = {9,8,7,6,5,4,3,-3,5,1003};

    modifyArray(array, 10, 19);

    // Debug out
    std::cout << array[2] << std::endl;

    return 0;
}