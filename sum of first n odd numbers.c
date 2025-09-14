#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n-1; i += 2) {
        sum = sum + i;  
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
