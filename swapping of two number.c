#include <stdio.h>

int main() {
    int a,b;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("swapping of two number using third variable is %d %d", a,b);
    return 0;
}
