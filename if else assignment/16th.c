#include <stdio.h>

int main() {
    char ch;
    int a, b, temp;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'w') {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Before Swap: a=%d, b=%d\n", a, b);

        temp = a;
        a = b;
        b = temp;

        printf("After Swap: a=%d, b=%d\n", a, b);
    } else {
        printf("input is not matched\n");
    }

    return 0;
}
