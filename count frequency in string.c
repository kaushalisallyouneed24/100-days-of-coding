#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    printf("Enter the character to count: ");
    scanf(" %c", &ch); // note the space before %c to consume any leftover newline

    // Count frequency
    while(str[i] != '\0') {
        if(str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
