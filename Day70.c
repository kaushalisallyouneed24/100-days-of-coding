#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char str[200];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to sentence case
    int i = 0;
    while (str[i] != '\0') {
        if (i == 0 && isalpha(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
        i++;
    }

    // Write to file
    fp = fopen("sentence_case.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    fputs(str, fp);
    fclose(fp);

    printf("Converted sentence saved to 'sentence_case.txt'\n");

    return 0;
}

