#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {        // rows (start from 5 down to 1)
        for(j = i; j <= 5; j++) {    // print from current i up to 5
            printf("%d", j);
        }
        printf("\n");  // move to next line
    }

    return 0;
}
