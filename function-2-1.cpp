#include <math.h>

#include <iostream>

void print_binary_str(std::string decimal_number) {

  int num;
  num = stoi(decimal_number);

  int out = 0;

  while (num > 0) {
    out = out * 10 + num % 2;

    num = (int)floor((float)num / 2.0);
  }

  int reverse = 0;
  int remainder;

  while (out != 0) {
    remainder = out % 10;
    reverse = reverse * 10 + remainder;
    out /= 10;
  }

  std::cout << reverse << std::endl;
}