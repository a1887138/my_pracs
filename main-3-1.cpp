#include <iostream>

// Located in function-3-1.cpp
extern int is_fanarray(int array[], int n);

int main() {
  // Init
  int debug_array[10] = {5, 6, 7, 8, 9, 9, 8, 7, 6, 5};

  // Calculations and print result
  std::cout << is_fanarray(debug_array, 10) << std::endl;

  return 0;
}