#include <iostream>

int main() {

    double double_init = 1.3;
    char char_letter_not_vehicle = 'W';

    double* look_a_double = &double_init;
    char* look_a_char = &char_letter_not_vehicle;


    std::cout << "Double: " << *look_a_double << ". Char: " << *look_a_char << "." << std::endl;

    return 0;
}