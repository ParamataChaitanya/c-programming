#include <stdio.h>

#define MAX 10

// Function to perform Gaussian elimination
int rankOfMatrix(int matrix[MAX][MAX], int row, int col) {
    int i, j, k, rank = col;

    for (i = 0; i < rank; i++) {
        // Check for zero rows
        if (matrix[i][i] != 0) {
            for (j = i + 1; j < row; j++) {
                // Make all rows below this one 0 in current column
                float ratio = matrix[j][i] / matrix[i][i];
                for (k = i; k < rank; k++) {
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        } else {
            // Find the first non-zero row in the current column
            int reduce = 1;
            for (j = i + 1; j < row; j++) {
                if (matrix[j][i] != 0) {
                    // Swap the current row with this row
                    for (k = 0; k < rank; k++) {
                        float temp = matrix[i][k];
                        matrix[i][k] = matrix[j][k];
                        matrix[j][k] = temp;
                    }
                    reduce = 0;
                    break;
                }
            }
            // If no non-zero row found, reduce rank
            if (reduce) {
                rank--;
                for (j = i; j < row; j++) {
                    matrix[j][i] = matrix[j][rank];
                }
                i--;
            }
        }
    }
    return rank;
}

int main() {
    int matrix[MAX][MAX], row, col, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int rank = rankOfMatrix(matrix, row, col);
    printf("Rank of the matrix is: %d\n", rank);


}