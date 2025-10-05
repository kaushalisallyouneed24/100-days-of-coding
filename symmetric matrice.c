#include <stdio.h>

int main() {
    int a[10][10];
    int row, col, i, j, flag = 1;

    // Input size
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    // Symmetric matrix must be square
    if (row != col) {
        printf("Matrix is not symmetric (not a square matrix).\n");
        return 0;
    }

    // Input elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
