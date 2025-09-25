
#include <stdio.h>

int main() {
    int n, i, pos, key;
    scanf("%d", &n);          // Size of array
    int a[n+1];               // Array with extra space
    for(i=0;i<n;i++) scanf("%d",&a[i]);  // Input array elements
    scanf("%d %d",&pos,&key); // Position (1-based) and element to insert

    // Shift elements to the right from position
    for(i=n; i>=pos; i--) a[i] = a[i-1];
    
    a[pos-1] = key;           // Insert element at given position
    n++;                      // Increase size of array

    for(i=0;i<n;i++) printf("%d ",a[i]); // Print updated array
    return 0;
}
