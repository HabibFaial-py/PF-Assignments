void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    int temp[n][n];
    for(int i = 0 ; i<matrixSize ; i++){
        for(int j = 0 ; j< *matrixColSize ; j++){
            temp[j][matrixSize - 1 - i] = matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = temp[i][j];
        }
    }
}    
