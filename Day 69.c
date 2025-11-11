#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (only one will repeat): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int expectedSum = (n - 1) * (n - 2) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    int repeated = actualSum - expectedSum;
    printf("Repeated element: %d\n", repeated);

    return 0;
}
