#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;   // number of rows

    for(i = 0; i < n; i++) {
        // print spaces
        for(space = 0; space < i; space++) {
            printf(" ");
        }
        // print stars
        for(j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
