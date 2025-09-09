#include <stdio.h>
int main() {
    int i, sum = 0;
    for(i = 7; i <= 500; i += 7) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
