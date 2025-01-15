#include <stdio.h>

int main() {
    char c = '*';
    
    // Upper triangle
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j < 9 - i) {
                printf(" ");
            } else {
                printf("%c ", c);
            }
        }
        printf("\n");
    }

    // Lower triangle
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j < i) {
                printf(" ");
            } else {
                printf("%c ", c);
            }
        }
        printf("\n");
    }

    return 0;
}
