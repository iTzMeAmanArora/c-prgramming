#include <stdio.h>

int main() {
    char ch;
    int a, b, c, d;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 's') {
        printf("Enter four numbers: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("Subtraction = %d\n", a - b - c - d);
    } else {
        printf("input is not matched\n");
    }

    return 0;
}
