#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n<=1){
        printf("Enter a valid number");
        return 0;
    }
    else {
        int i =1;
        int count=0;
        while(i<=n){
            if(n%i==0){
                count++;
            }
            i++;
        }
        if(count==2)
                printf("Number is Prime");
            else
                printf("Number is not Prime");
    }
}