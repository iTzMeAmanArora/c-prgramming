#include <stdio.h>
int main(){

    float a=1.6;
    float b=12;
    float c=2;
    float d=7.8;
    float e=1.5;
    
    float sub = b - c;         
    float mul = a * sub;        
    float div = mul / c;        
    float add = div + d;       
    float result = add - e;  

    printf("%f", result);
}