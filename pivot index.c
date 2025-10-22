#include <stdio.h>

int main() {
    int n, i, total = 0, leftSum = 0, pivot = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for(i = 0; i < n; i++) {
        if(leftSum == total - leftSum - arr[i]) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }
    printf("%d\n", pivot);
    return 0;
}
