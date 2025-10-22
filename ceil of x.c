#include <stdio.h>

int main() {
    int n, x, i, index = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter x: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}
