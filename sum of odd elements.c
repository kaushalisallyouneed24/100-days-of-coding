#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // ith odd number
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
