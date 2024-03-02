#include <iostream>

// Located in function-3-5.cpp
extern double sum_even(double array[], int n);

int main() {
  // Init
  double debug_array[15] = {2, 5, 7, 4, 2, 6, 8, 54, 2, 56, 8, -11, -15, 0, 5};

  // Calculations and print result
  std::cout << sum_even(debug_array, 15) << std::endl;

  return 0;
}