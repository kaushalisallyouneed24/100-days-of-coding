#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    while(str[i] != '\0') {
        ch = str[i];

        // Check if character is a letter
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert to lowercase for simplicity
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            // Check if vowel
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
