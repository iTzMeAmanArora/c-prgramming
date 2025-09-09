#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 10) {
        printf("The number is greater than 10.\n");
    } else {
        printf("The number is not greater than 10.\n");
    }

    return 0;
}
