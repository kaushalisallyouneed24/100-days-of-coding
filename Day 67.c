#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d sorted elements: ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int merged[m + n];

    for (int i = 0; i < m; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < n; i++)
        merged[m + i] = arr2[i];

    for (int i = 0; i < m + n - 1; i++) {
        for (int j = 0; j < m + n - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
