int array_sum(int array[], int n) {
  if (n >= 1) {
    // Init
    int sum = 0;

    // Repeat over array n times and sum
    for (int i = 0; i < n; i++) {
      sum += array[i];
    }

    return sum;
  }
  // Do nothing if n < 1
  return 0;
}