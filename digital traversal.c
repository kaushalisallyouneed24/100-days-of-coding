#include <stdio.h>

int main() {
    int a[10][10], row, col, i, j, k;

    // Input size
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Loop over all possible sums (i + j)
    for(k = 0; k <= row + col - 2; k++) {
        for(i = 0; i < row; i++) {
            j = k - i;  // column index
            if(j >= 0 && j < col) {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
