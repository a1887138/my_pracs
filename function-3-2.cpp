#include <math.h>

int median_array(int array[], int n) {
  if (n >= 1 || n % 2 != 0) {
    // Loop and bogosort
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - 1; j++) {
        if (array[j] > array[j + 1]) {
          int temp_num = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp_num;
        }
      }
    }

    // Return num in median position
    return array[(int)ceilf((float)n / 2) - 1];
  }
  // Do nothing if n < 1 or even
  return 0;
}