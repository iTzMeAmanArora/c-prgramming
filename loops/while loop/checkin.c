#include <stdio.h>
int main (){
    int i;
    printf("Enter the number:");
    scanf("%d",&i);

    int k;
    printf("Enter the number:");
    scanf("%d",&k);

    int temp=i;

    int count=0;
    while(temp>0){
        count++;
        temp/=10;
    }

    int power =1;
    while (count-1>0){
        power=power*10;
        count--;
        
    }

    while (k>0){
    i=(i%10)*1000 + i/10;
    k--;
    }

    printf("%d",i);


}