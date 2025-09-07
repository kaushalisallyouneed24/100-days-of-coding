#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}
