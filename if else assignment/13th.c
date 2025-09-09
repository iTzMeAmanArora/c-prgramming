#include <stdio.h>

int main() {
    char ch;
    int a, b;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'm') {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Multiplication = %d\n", a * b);
    } else {
        printf("input is not matched\n");
    }

    return 0;
}
