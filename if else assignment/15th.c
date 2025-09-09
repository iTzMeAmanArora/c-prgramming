#include <stdio.h>

int main() {
    char ch;
    int a, b;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 's') {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Before Swap: a=%d, b=%d\n", a, b);

        a = a + b;
        b = a - b;
        a = a - b;

        printf("After Swap: a=%d, b=%d\n", a, b);
    } else {
        printf("input is not matched\n");
    }

    return 0;
}
