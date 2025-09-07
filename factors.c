#include <stdio.h>

int main() {
    int n, i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    // Check factors
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
