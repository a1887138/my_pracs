#include <iostream>

extern void print_binary_str(std::string decimal_number);

int main() {
  std::string test = "5";

  print_binary_str(test);

  return 0;
}