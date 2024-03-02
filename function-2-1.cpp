int min_element(int array[], int n) {
  if (n >= 1) {
    // Init
    int smallest = array[0];

    // Loop and find smallest
    for (int i = 0; i < n; i++) {
      if (array[i] < smallest) {
        smallest = array[i];
      }
    }

    return smallest;
  }
  // Do nothing if n < 1
  return 0;
}