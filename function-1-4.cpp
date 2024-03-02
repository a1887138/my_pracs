int sum_two_arrays(int array[], int secondarray[], int n) {
  if (n >= 1) {
    // Init
    int sum = 0;

    // Repeat over arrays n times and sum
    for (int i = 0; i < n; i++) {
      sum += (array[i] + secondarray[i]);
    }

    return sum;
  }
  // Do nothing if n < 1
  return 0;
}