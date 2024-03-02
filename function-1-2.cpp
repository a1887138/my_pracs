double array_mean(int array[], int n) {
  if (n >= 1) {
    // Init
    double mean = 0;
    float mean_out = 0;

    // Repeat over array n times and sum
    for (int i = 0; i < n; i++) {
      mean += array[i];
    }

    mean_out = (float)mean / (float)n;

    return mean_out;
  }

  return 0.0;
}