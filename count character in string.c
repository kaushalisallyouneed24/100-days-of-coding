#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads string including spaces

    // Count characters until null character
    while(str[i] != '\0') {
        // Ignore newline character from fgets
        if(str[i] != '\n') {
            count++;
        }
        i++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
