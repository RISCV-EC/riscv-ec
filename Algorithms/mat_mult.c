// Core: RISCV-EC-v1.0.0
// Kernel: mat_mult - 3x3 matrix multiplication example.


#include <stdint.h>

#define ROWS_A 3
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 3

void matrix_multiply(int A[ROWS_A][COLS_A], int B[ROWS_B][COLS_B], int result[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int matrixA[ROWS_A][COLS_A] = {
        {1, 2, 4},
        {3, 4, 6},
        {5, 6, 7}
    };

    int matrixB[ROWS_B][COLS_B] = {
        {7, 8, 9},
        {11, 12, 13},
        {14, 15, 16},
    };

    int result[ROWS_A][COLS_B];

    matrix_multiply(matrixA, matrixB, result);

    *(volatile uint8_t *)0xFF = 1;
    return 0;
}
