#include <stdio.h>

int main() {
    int m, n;

    printf("Enter m : ");
    scanf("%d", &m);

    printf("Enter n: ");
    scanf("%d", &n);

    while(m <= n) {
        printf("%d\n", m);
        m++; 
    }
}
