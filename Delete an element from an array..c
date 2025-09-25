#include <stdio.h>

int main() {
    int n, i, pos;
    scanf("%d", &n);          // Size of array
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);  // Input array elements
    scanf("%d",&pos);          // Position (1-based) to delete

    // Shift elements to the left to overwrite the deleted element
    for(i=pos-1;i<n-1;i++) 
        a[i] = a[i+1];

    n--;  // Reduce size of array

    for(i=0;i<n;i++) 
        printf("%d ",a[i]);   // Print updated array

    return 0;
}

