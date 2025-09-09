#include <stdio.h>

int main() {
    int N, i = 1, sum = 0 ;

    printf("Enter N: ");
    scanf("%d", &N);

    while (i <= N) {
        sum += i;
        i++;
    }

    printf(" %d\n", sum);

}
 