#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        digit = temp % 10;     // get last digit
        fact = 1;

        // find factorial of the digit
        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;      // add factorial to sum
        temp = temp / 10;      // remove last digit
    }

    if(sum == num)
        printf("%d is a Strong Number", num);
    else
        printf("%d is NOT a Strong Number", num);

    return 0;
}
