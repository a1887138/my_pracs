int count_evens(int number) {
  if (number >= 1) {
    // Init evens at 1 because of 0
    int evens = 1;

    // Increment i twice and increment evens by laws of mathematics
    for (int i = 0; i < number; i += 2) {
      evens += 1;
    }

    return evens;
  }
  // Do nothing if n < 1
  return 0;
}