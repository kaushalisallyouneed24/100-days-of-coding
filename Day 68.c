#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array (excluding the missing number): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers between 0 and %d: ", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    int missing = total - sum;
    printf("Missing number: %d\n", missing);

    return 0;
}
