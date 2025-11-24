#include <stdio.h>

int main() {
    FILE *fp;
    char file[100], text[200];

    printf("Enter file name: ");
    scanf("%s", file);
    getchar();

    fp = fopen(file, "a");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended\n");
    return 0;
}
