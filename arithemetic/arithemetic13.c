#include <stdio.h>

int main() {
    float a = 8.9;
    float b = 1.67;
    float c = 6.21;
    float d = 5.6;
    float e = 7.8;
    float f = 34;
    float g = 157;

    float mul = a * b;            
    float sub1 = c - d;           
    float sub2 = mul - sub1;        
    float add = sub2 + e;          
    float sub3 = add - f;          
    float result = sub3 + g;       

    printf("%f\n", result);

    return 0;
}
