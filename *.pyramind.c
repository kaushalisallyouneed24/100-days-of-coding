#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;   // number of rows in the top half

    // upper pyramid
    for(i = 1; i <= n; i++) {
        // print spaces
        for(space = i; space < n; space++) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower inverted pyramid
    for(i = n-1; i >= 1; i--) {
        // print spaces
        for(space = i; space < n; space++) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
