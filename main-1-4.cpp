#include <iostream>

// Located in function-1-4.cpp
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
  // Init
  int debug_array[3] = {2, 5, 7};
  int second_debug_array[3] = {-1, -2, -3};

  // Calculations and print result
  std::cout << sum_two_arrays(debug_array, second_debug_array, 3) << std::endl;

  return 0;
}