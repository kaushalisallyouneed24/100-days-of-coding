#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch, vowels = 0, consonants = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char c = tolower(ch);
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
