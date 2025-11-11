#include <stdio.h>

void sortArray(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if(k < 1 || k > n) {
        printf("Invalid input. Please enter k between 1 and %d.\n", n);
        return 0;
    }

    sortArray(arr, n);
    printf("The %d%s smallest element is: %d\n", k,
           (k == 1) ? "st" : (k == 2) ? "nd" : (k == 3) ? "rd" : "th",
           arr[k - 1]);

    return 0;
}
