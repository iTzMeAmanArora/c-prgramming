#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int num = 2;
    while (num <= n) {
        int i = 1, count = 0;

        while (i <= num) {
            if (num % i == 0) {
                count++;
            }
        i++;
        }

        if (count == 2) {
            printf("%d ", num);
        }
        num++;
    }

    return 0;
}
