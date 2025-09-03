#include <stdio.h>
int main() {
    int principal, rate , time;
    printf("enter the values");
    scanf("%d",& principal);
    scanf("%d",& rate);
    scanf("%d",& time);
     int SI = (principal*rate*time)/100.0;
     printf("simple interest is: %d",SI);
    return 0;
}
