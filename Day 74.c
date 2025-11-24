#include <stdio.h>

int main() {
    FILE *src, *dest;
    char source[100], target[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", target);

    src = fopen(source, "r");
    if (src == NULL) {
        printf("Source file not found\n");
        return 1;
    }

    dest = fopen(target, "w");
    if (dest == NULL) {
        printf("Unable to create destination file\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully\n");
    return 0;
}
