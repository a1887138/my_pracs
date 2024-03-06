#include <math.h>

#include <iostream>

int transform(int number) {
  int out = 0;

  while (number > 0) {
    out = out * 10 + number % 2;

    number = (int)floor((float)number / 2.0);
  }

  return out;
}

int main() {
  int test = 5;
  int out = 0;

  out = transform(test);
  std::cout << out << std::endl;

  return 0;
}