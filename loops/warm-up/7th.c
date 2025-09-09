#include <stdio.h>
int main() {
    int m=1;
    int n=100 ;
    
    while(m <= n) {
        if(m % 2 != 0) {
            printf(" %d ", m);
        }
        m++;
    }

}
