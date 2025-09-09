#include <stdio.h>

int main() {
    float a = 4.5;
    float b = 1.2;
    float c = 82;
    float d = 2;
    float e = 5.6;
    float f = 1.234;

    float mul = a * b;         
    float div = c / d;         
    float sub = mul - div;     
    float sub2 = sub - e;      
    float result = sub2 + f;  

    printf("%f", result);

    return 0;
}
