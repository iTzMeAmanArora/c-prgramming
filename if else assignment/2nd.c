#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 67) {
        printf("The number is greater than 67.\n");
    } else {
        printf("The number is not greater than 67.\n");
    }

    return 0;
}
