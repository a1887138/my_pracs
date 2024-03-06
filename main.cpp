#include <iostream>

extern int transform(int number);

int main() {

    int test = 5;
    int out = 0;

    out = transform(test);
    std::cout << out << std::endl;

    return 0;
}