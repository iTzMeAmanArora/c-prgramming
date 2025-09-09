#include <stdio.h>
int main() {
    int N, i;
    int product = 1;
    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i += 2) {
        product *= i;
    }
    printf("%d\n", product);
    return 0;
}
