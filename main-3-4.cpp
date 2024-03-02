#include <iostream>

// Located in function-3-4.cpp
extern void print_pass_fail(char grade);

int main() {
  // Init
  char debug_grade = 'A';

  print_pass_fail(debug_grade);

  return 0;
}