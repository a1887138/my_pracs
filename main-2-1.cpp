#include <iostream>

extern void print_binary_string(std::string decimal_number);

int main() {
  std::string test = "5";

  print_binary_string(test);

  return 0;
}