#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d %d",&a, &b);
    int s= a+b;
    int d= a-b;
    int p= a*b;
    int q= a/b;
    printf("sum of two number is%d\n",s);
    printf("diffrence of two number is%d\n",d);
    printf("product of two number is%d\n",p);
    printf("quoitent of two number is%d\n",q);
    return 0;
    
    
}
