#include <iostream>

int *readNumbers() {

    int * array = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> array[i];
    }

    return array;
}

void printNumbers(int *numbers,int length) {

    for (int i = 0; i < length; i++) {

        std::cout << i << " " << numbers[i] << std::endl;

    }

    return;
}


int secondSmallestSum(int *numbers,int length) {

    int current_min = INT_MAX;
    int current_second_min = INT_MAX;
    int sub_array_total;

    for (int i = 0; i < length; i++){

        sub_array_total = 0;

        // 1 1,2 1,2,3,
        for (int j = i; j < length; j++) {
            sub_array_total += numbers[j];
        }
        
        if (sub_array_total < current_min) {
            current_second_min = current_min;
            current_min = sub_array_total;
        }
        else if (sub_array_total < current_second_min && sub_array_total > current_min)
        {
            current_second_min = sub_array_total;
        }

        
    }

    return current_second_min;
}