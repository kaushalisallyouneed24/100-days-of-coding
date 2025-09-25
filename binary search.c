#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high) {
        mid = (low+high)/2;
        if(a[mid]==key) {
            printf("Found at position %d", mid+1);
            found=1;
            break;
        } else if(a[mid]<key) {
            low=mid+1;
        } else {
            high=mid-1;
        }
    }

    if(found==0) printf("Not found");
    return 0;
}
