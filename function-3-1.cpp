#include <math.h>

bool is_fanarray(int array[], int n) {
  if (n >= 1) {
    // Loop and check opposite end of array
    for (int i = 1; i < ceilf((float)n / 2); i++) {
      if ((array[i] != array[n - i - 1]) || array[i] < array[i - 1]) {
        return false;
      }
    }

    return true;
  }
  // Do nothing if n < 1
  return false;
}