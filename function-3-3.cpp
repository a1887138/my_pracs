#include <math.h>

double weighted_average(int array[], int n) {
  if (n >= 1) {
    double total = 0;
    // Loop and count
    for (int i = 0; i < n; i++) {
      // Init
      int x = array[i];
      int w = 0;
      for (int j = 0; j < n; j++) {
        if (array[j] == x) {
          w += 1;
        }
      }
      total += x * ((double)w / (double)n);
    }

    return total;
  }
  // Do nothing if n < 1 or even
  return 0;
}