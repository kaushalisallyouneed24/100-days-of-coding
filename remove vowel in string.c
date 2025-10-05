#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Remove vowels
    while(str[i] != '\0') {
        char ch = str[i];

        // Check if character is not a vowel
        if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j] = str[i]; // keep the character
            j++;
        }
        i++;
    }

    str[j] = '\0'; // terminate the string

    printf("String after removing vowels: %s\n", str);

    return 0;
}
