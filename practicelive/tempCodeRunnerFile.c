#include <stdio.h>
int main(){
    int m;
    printf("Enter m:");
    scanf("%d",m);
    int n;
    printf("Enter n:");
    scanf("%d",n);
    
    while (m <= n) {
        int i = 1, count = 0;

        while (i <= m) {
            if (m % i == 0) {
                count++;
            }
        i++;
        }

        if (count == 2) {
            printf("%d ", m);
        }
        m++;
    }
}