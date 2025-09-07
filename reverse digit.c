#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;               // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        n = n / 10;                       // remove last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
