#include <iostream>

// Located in function-2-4.cpp
extern int is_ascending(int array[], int n);

int main() {
  // Init
  int debug_array[5] = {5, 6, 7, 8, 9};

  // Calculations and print result
  std::cout << is_ascending(debug_array, 5) << std::endl;

  return 0;
}