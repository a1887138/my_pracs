#include <iostream>

// Located in function-2-2.cpp
extern int max_element(int array[], int n);

int main() {
  // Init
  int debug_array[15] = {2, 5, 7, 4, 2, 6, 8, 54, 2, 56, 8, -11, -15, 0, 5};

  // Calculations and print result
  std::cout << max_element(debug_array, 15) << std::endl;

  return 0;
}