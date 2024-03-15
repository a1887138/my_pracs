void modifyArray(double* array, int size, double value) {


    for (int i = 1; i < size; i++) {
        array[i] += value;
    }

    return;
}