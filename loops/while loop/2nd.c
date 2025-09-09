#include <stdio.h>
int main() {
    int m=2;
    int n=20 ;
    
    while(m <= n) {
        if(m % 2 == 0) {
            printf(" %d ", m);
        }
        m++;
    }

}
