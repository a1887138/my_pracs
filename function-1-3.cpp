int num_count(int array[], int n, int number) {
  if (n >= 1) {
    // Init
    int count = 0;

    // Repeat over array n times and increment
    for (int i = 0; i < n; i++) {
      if (array[i] == number) {
        count += 1;
      }
    }

    return count;
  }
  // Do nothing if n < 1
  return 0;
}