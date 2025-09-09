#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'z') {
        printf("Lower line.\n");
    } else {
        if (ch == 'x') {
            printf("Lower line.\n");
        } else {
            if (ch == 'c') {
                printf("Lower line.\n");
            } else {
                if (ch == 'v') {
                    printf("Lower line.\n");
                } else {
                    if (ch == 'b') {
                        printf("Lower line.\n");
                    } else {
                        if (ch == 'n') {
                            printf("Lower line.\n");
                        } else {
                            if (ch == 'm') {
                                printf("Lower line.\n");
                            } else {
                                printf("Input is not matched.\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
