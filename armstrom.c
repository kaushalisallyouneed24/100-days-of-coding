#include <stdio.h>

int main() {
    int n, original, remainder, result = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Calculate sum of cubes of digits
    while (n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder; // cube of digit
        n = n / 10;
    }

    // Check Armstrong
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
