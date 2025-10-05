#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Remove newline character if present
    while(str[i] != '\0') {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    j = i - 1; // last index
    i = 0;     // first index

    // Swap characters from start and end
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
