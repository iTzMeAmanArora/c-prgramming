#include <stdio.h>
int main() {
    int N, i;
    float num, sum = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("%f\n", sum / N);
    return 0;
}
