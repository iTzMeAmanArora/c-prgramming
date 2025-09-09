#include <stdio.h>
int main() {
    int m, i;
    printf("Enter a number: ");
    scanf("%d", &m);

    i = m;
    while(i <= 500) {
        printf("%d ", i);
        i += m; 
    }

}
