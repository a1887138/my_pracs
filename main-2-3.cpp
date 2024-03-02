#include <iostream>

// Located in function-2-3.cpp
extern int two_five_nine(int array[], int n);

int main() {
  // Init
  int debug_array[15] = {2, 5, 7, 4, 2, 6, 8, 54, 2, 56, 8, -11, -15, 0, 5};

  two_five_nine(debug_array, 15);

  return 0;
}