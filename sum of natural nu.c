#include <stdio.h>

int main() {
    int s=0; int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("sum of first n natural number is %d= %d",n,s);
    return 0;
}
