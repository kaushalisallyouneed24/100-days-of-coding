#include <stdio.h>

int main() {
    int n, i, max=0, digit;
    int count[10] = {0};
    scanf("%d", &n);
    
    if(n<0) n = -n; // handle negative numbers
    
    while(n>0) {
        count[n%10]++;
        n /= 10;
    }
    
    for(i=0;i<10;i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }
    
    printf("%d", digit);
    return 0;
}
