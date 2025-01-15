#include <stdio.h>

int main() {
    char X;
    scanf("%c", &X);

    // Check if the character is a digit
    if (X >= '0' && X <= '9') {
        printf("IS DIGIT\n");
    } else if (X >= 'A' && X <= 'Z') {
        // Check if the character is a capital letter
        printf("ALPHA\nIS CAPITAL\n");
    } else if (X >= 'a' && X <= 'z') {
        // Check if the character is a small letter
        printf("ALPHA\nIS SMALL\n");
    }

    return 0;
}
