#include <math.h>

#include <iostream>

void print_binary_string(int decimal_number) {
  int out = 0;

  while (decimal_number > 0) {
    out = out * 10 + decimal_number % 2;

    decimal_number = (int)floor((float)decimal_number / 2.0);
  }

  std::cout << out << std::endl;
}