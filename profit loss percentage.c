#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percentage;

    // Input
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    // Check for profit or loss
    if (sp > cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (cp > sp) {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
