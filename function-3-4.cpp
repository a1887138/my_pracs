#include <iostream>

void print_pass_fail(char grade) {
  switch (grade) {
    case 'A':
    case 'B':
    case 'C':
      std::cout << "Pass\n" << std::endl;
      break;
    case 'D':
    case 'E':
      std::cout << "Fail\n" << std::endl;
      break;
    default:
      std::cout << "Nothing\n" << std::endl;
      break;
  }

  return;
}