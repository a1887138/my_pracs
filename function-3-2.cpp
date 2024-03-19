#include <iostream>

bool equalsArray(int *numbers1,int *numbers2,int length) {

    if (length < 1){
        return false;
    }

    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }

    return true;
}

int *readNumbers() {

    int * array = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> array[i];
    }

    return array;
}

int *reverseArray(int *numbers1,int length) {

    int * numbers2 = new int[10];

    for (int i = 0; i < length; i++) {
        numbers2[i] = numbers1[length - i - 1];
    }

    return numbers2;
}