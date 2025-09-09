#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a') {
        printf("apple\n");
    } else {
        printf("input is not matched\n");
    }

    return 0;
}
