#include <iostream>

// Located in function-2-5.cpp
extern int is_descending(int array[], int n);

int main() {
  // Init
  int debug_array[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

  // Calculations and print result
  std::cout << is_descending(debug_array, 10) << std::endl;

  return 0;
}