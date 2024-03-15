double arrayMin(double* array, int size) {

    // Init
    double currentMin = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < currentMin) {
            currentMin = array[i];
        }
    }

    return currentMin;
}