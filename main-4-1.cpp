#include <iostream>

extern int *readNumbers();
int secondSmallestSum(int *numbers,int length);


int main () {

    int * array1 = readNumbers();

    std::cout << secondSmallestSum(array1,10) << std::endl;

    delete array1;

    return 0;
}