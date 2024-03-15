#include <iostream>

extern double arrayMin(double* array, int size);

int main () {

    // Init
    double array[10] = {9,8,7,6,5,4,3,-3,5,1003};

    // Debug out
    std::cout << arrayMin(array, 10) << std::endl;

    return 0;
}