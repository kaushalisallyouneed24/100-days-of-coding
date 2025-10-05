#include <stdio.h>

int main() {
    int a[10][10], n, i, j, k, flag = 1;

    // Input size
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check distinct diagonal elements
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
