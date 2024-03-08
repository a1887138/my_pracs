#include <math.h>

#include <iostream>

void print_binary_string(std::string decimal_number) {

  int num;
  num = stoi(decimal_number);

  int out = 0;

  while (num > 0) {
    out = out * 10 + num % 2;

    num = (int)floor((float)num / 2.0);
  }

  std::cout << out << std::endl;
}