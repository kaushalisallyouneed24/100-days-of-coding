#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Toggled case string: %s", str);

    return 0;
}
