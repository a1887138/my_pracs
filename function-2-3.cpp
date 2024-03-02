#include <iostream>

void two_five_nine(int array[], int n) {
  if (n >= 1) {
    // Init
    int twos = 0;
    int fives = 0;
    int nines = 0;

    // Main switch
    for (int i = 0; i < n; i++) {
      switch (array[i]) {
        case 2:
          twos += 1;
          break;
        case 5:
          fives += 1;
          break;
        case 9:
          nines += 1;
          break;
        default:
          break;
      }
    }

    // Out
    std::cout << "2:" << twos << ";5:" << fives << ";9:" << nines << ";"
              << std::endl;

    return;
  }
  // Do nothing if n < 1
  return;
}