#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = arr[0];
    int current_sum = arr[0];

    for(int i = 1; i < n; i++) {
        // Either start a new subarray or extend the current one
        if(current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        // Update the global maximum
        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("Maximum subarray sum = %d\n", max_sum);
    return 0;
}
