void changeValue(double* value) {

    // Life, the universe, and everything
    *value = 42;

    return;
}

void printArray(double* array, int n) {

    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }


    return;
}

double arrayMax(double* array, int n) {

    double max = array[0];

    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

double* dynamicArray(int N, double M){

    double* array = new double[N];

    for (int i = 0; i < N; i++){
        array[i] = M;
    }

    return array;
}
