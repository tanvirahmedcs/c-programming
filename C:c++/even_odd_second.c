#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // Find the first digit
    int firstDigit = X / 1000;

    // Check if the first digit is even or odd
    if (firstDigit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
