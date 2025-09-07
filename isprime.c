#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is NOT a prime number.\n", n);
        return 0;
    }

    // Check divisibility
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output
    if (isPrime)
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is NOT a Prime number.\n", n);

    return 0;
}
