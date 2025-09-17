#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for(i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator;  // add term
        numerator += 2;    // next even number
        denominator += 4;  // denominator increases by 4
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
