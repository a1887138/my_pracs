#include <iostream>

// Located in function-1-3.cpp
extern int array_count(int array[], int n, int number);

int main() {
  // Init
  int debug_array[15] = {2, 5, 7, 4, 2, 6, 8, 54, 2, 56, 8, -11, -15, 0, 5};

  // Calculations and print result
  std::cout << array_count(debug_array, 15, 2) << std::endl;

  return 0;
}