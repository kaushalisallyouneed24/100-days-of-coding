#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;   // number of rows

    for(i = n; i >= 1; i--) {
        // print spaces
        for(space = 1; space < i; space++) {
            printf(" ");
        }
        // print numbers from i to n
        for(j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
