#include <stdio.h>

int main() {
    int m, n, i;
    
    printf("Enter two numbers (m and n): ");
    scanf("%d %d", &m, &n);

    int temp1 = m, temp2 = n;

    printf("Prime factors of %d: ", m);
    i = 2;
    while (m > 1) {
        if (m % i == 0) {
            printf("%d ", i);
            m = m / i;
        } else {
            i++;
        }
    }
    printf("\n");

    printf("Prime factors of %d: ", n);
    i = 2;
    while (n > 1) {
        if (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        } else {
            i++;
        }
    }
    printf("\n");

    int a = temp1, b = temp2;
    while (a != b) {
        if (a < b)
            a += temp1;
        else
            b += temp2;
    }

    printf("LCM of %d and %d = %d\n", temp1, temp2, a);

    return 0;
}
