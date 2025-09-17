#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // maximum stars in middle

    // increasing part
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between groups
    }

    // decreasing part
    for(i = n-1; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between groups
    }

    return 0;
}
