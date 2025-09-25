#include <stdio.h>

int main() {
    int n, i, key, pos;
    scanf("%d", &n);        // Read the size of the array
    int a[n+1];             // Create array with extra space for new element

    // Read the elements of the array (assume it's sorted)
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]);

    scanf("%d",&key);       // Read the element to be inserted

    // Find the position where the key should be inserted
    for(i=0;i<n;i++) {
        if(a[i] > key) 
            break;
    }
    pos = i;

    // Shift elements to the right to make space for key
    for(i=n; i>pos; i--) 
        a[i] = a[i-1];

    a[pos] = key;   // Insert the key at correct position
    n++;            // Increase array size

    // Print the updated array
    for(i=0;i<n;i++) 
        printf("%d ",a[i]);

    return 0;
}
