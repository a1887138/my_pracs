#include <iostream>

// Located in function-3-2.cpp
extern int median_array(int array[], int n);

int main() {
  // Init
  int debug_array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // Calculations and print result
  std::cout << median_array(debug_array, 9) << std::endl;

  return 0;
}