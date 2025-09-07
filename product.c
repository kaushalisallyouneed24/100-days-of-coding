#include <stdio.h>

int main() {
    int n, i;
    int product = 1;   // using simple int
    int hasEven = 0;   // to check if any even number exists

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("Product of even numbers from 1 to %d = %d\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}
