#include <iostream>

// Located in function-3-3.cpp
extern double weighted_average(int array[], int n);

int main() {
  // Init
  int debug_array[6] = {1, 2, 1, 4, 1, 3};

  // Calculations and print result
  std::cout << weighted_average(debug_array, 6) << std::endl;

  return 0;
}