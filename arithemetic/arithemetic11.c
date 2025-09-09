#include <stdio.h>

int main() {
    float a = 3.4;
    float b = 1.2;
    float c = 3.7;
    float d = 1.2;
    float e = 2.0;
    float f = 6.8;

    float sub = c - d;              
    float mul = b * sub;            
    float div = mul / e;           
    float add1 = a + div;           
    float result = add1 + f;        

   
    printf(" %f\n", result);

    return 0;
}
