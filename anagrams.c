#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i;

    // Input two strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // If lengths differ, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    // Count frequency of each character
    for (i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    // Compare character frequencies
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Strings are Anagrams\n");
    return 0;
}
