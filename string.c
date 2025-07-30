#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Reverse the string in place
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
