#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int maxSum = 0, windowSum = 0;
    for(i = 0; i < k; i++)
        windowSum += arr[i];
    maxSum = windowSum;

    for(i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
