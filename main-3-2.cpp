#include <iostream>

extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length);


int main () {

    int * array1 = readNumbers();
    int * array2 = reverseArray(array1, 10);

    for (int i = 0; i < 10; i++) {
        std::cout << array2[i] << std::endl;
    }

    delete array1;
    delete array2;

    return 0;
}