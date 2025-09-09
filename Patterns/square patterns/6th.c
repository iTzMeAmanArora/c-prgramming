#include <stdio.h>
int main(){
    int n =4;
    for(int i=1; i<=n; i++) {       
        for(int j=2*n-1; j>=1; j=j-2) {   
            printf("%d ", j); 
        }
        printf("\n");
    }
}