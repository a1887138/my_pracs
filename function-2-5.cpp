bool is_descending(int array[], int n) {
  if (n >= 1) {
    // Loop and check previous
    for (int i = 1; i < n; i++) {
      if (array[i] > array[i - 1]) {
        return false;
      }
    }

    return true;
  }
  // Do nothing if n < 1
  return false;
}