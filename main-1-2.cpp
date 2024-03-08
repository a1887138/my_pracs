#include <iostream>

// MAIN IS BROKEN BECAUSE I DON'T WANT TO WRITE OUT A 10X10 TEST MATRIX
extern int is_identity(int array[4][4]);


int main() {

    int array[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};

    std::cout << is_identity(array) << std::endl;

    return 0;
}