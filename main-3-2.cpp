#include <iostream>

// Located in function-3-2.cpp
extern int median_array(int array[], int n);

int main() {
  // Init
  int debug_array[7] = {3,5,2,1,4,6,7};

  // Calculations and print result
  std::cout << median_array(debug_array, 7) << std::endl;

  return 0;
}