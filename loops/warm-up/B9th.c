#include <stdio.h>
int main() {
    int m;
    printf("Enter m:");
    scanf("%d",&m);

    int n;
    printf("Enter n:");
    scanf("%d",&n);
    
    while(m <= n) {
        if(m % 2 == 0) {
            printf(" %d ", m);
        }
        m++;
    }

}
