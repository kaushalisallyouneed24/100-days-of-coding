#include <stdio.h>

int main() {
    int n, i, leftSum = 0, total = 0, pivot = -1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        total += i;

    for(i = 1; i <= n; i++) {
        leftSum += i;
        if(leftSum == total - leftSum + i) {
            pivot = i;
            break;
        }
    }

    printf("%d\n", pivot);
    return 0;
}
