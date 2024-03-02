#include <iostream>

// Located in function-1-5.cpp
extern int count_evens(int number);

int main() {
  // Init
  int debug_number = 928;

  // Calculations and print result
  std::cout << count_evens(debug_number) << std::endl;

  return 0;
}