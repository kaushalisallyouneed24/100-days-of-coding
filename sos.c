#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 2;

    for(i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator; // add term
        numerator += 2;   // odd numbers (1,3,5,7,…)
        denominator += 2; // even numbers (2,4,6,8,…)
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}
