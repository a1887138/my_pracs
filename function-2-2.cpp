int max_element(int array[], int n) {
  if (n >= 1) {
    // Init
    int biggest = array[0];

    // Loop and find biggest
    for (int i = 0; i < n; i++) {
      if (array[i] > biggest) {
        biggest = array[i];
      }
    }

    return biggest;
  }
  // Do nothing if n < 1
  return 0;
}