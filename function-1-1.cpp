int sum_diagonal(int array[4][4]){

    int out = 0;

    for (int i = 0; i < 4; i++){
        out += array[i][i];
    }

    return out;
}