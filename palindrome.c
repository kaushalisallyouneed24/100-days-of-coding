#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // store original number

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    // Check palindrome
    if (original == reversed)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);

    return 0;
}
