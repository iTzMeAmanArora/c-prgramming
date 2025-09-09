#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, average;

    printf("Enter total numbers : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;

    printf(" %.2f\n", n, average);

    return 0;
}
