#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0, maxLength = 0;

    for (int i = 0; i < n; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;

        if (i - start + 1 > maxLength)
            maxLength = i - start + 1;
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLength);
    return 0;
}
