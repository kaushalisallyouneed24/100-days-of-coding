#include <stdio.h>

int main() {
    int n, digit, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;     // last digit
        if(digit % 2 == 1)  // odd check
            product = product * digit;
        n = n / 10;         // remove last digit
    }

    printf("Product of odd digits = %d", product);
    return 0;
}
