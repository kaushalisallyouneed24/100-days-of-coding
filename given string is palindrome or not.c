#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;

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

    // Compare characters from start and end
    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0; // Not a palindrome
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
