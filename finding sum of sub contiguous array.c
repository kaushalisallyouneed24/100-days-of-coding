#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxCurrent = arr[0], maxGlobal = arr[0];
    for(i = 1; i < n; i++) {
        if(maxCurrent < 0)
            maxCurrent = arr[i];
        else
            maxCurrent += arr[i];
        if(maxCurrent > maxGlobal)
            maxGlobal = maxCurrent;
    }

    printf("%d\n", maxGlobal);
    return 0;
}
