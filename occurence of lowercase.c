#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    int i;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through string
    for(i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        // Consider only lowercase letters
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            if(freq[ch - 'a'] == 2) { // second occurrence
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
