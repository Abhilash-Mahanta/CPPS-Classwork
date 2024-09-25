#include <stdio.h>

int matrix_trace(int matrix[30][30], int size) {
    int trace_sum = 0;


    for (int i = 0; i < size; i++) {
        trace_sum += matrix[i][i];
    }

    return trace_sum;
}

int main() {
    int matrix[30][30];  
    int size;

    
    printf("Enter the size of the matrix (max 30): ");

    scanf("%d", &size);

    if (size > 30 || size <= 0) {
        printf("Matrix size must be between 1 and 30.\n");
        return 1;
    }

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int trace = matrix_trace(matrix, size);
    printf("Trace of the matrix: %d\n", trace);

    return 0;
}
