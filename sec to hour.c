#include <stdio.h>
int main()
{
    int sec; int remSec;
    printf("enter time in seconds: ");
    scanf("%d",&sec);
    int hour = sec / 3600;          
      remSec = sec % 3600;
     int min = remSec / 60;         
      remSec = remSec % 60;  
    printf("your time in hours:mins:sec is %d:%d:%d", hour,min,remSec);
    return 0;
    
}
