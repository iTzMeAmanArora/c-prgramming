#include <stdio.h>

int main() {
    float a, b, c, d;
    printf("Enter  a, b, c, d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float m=a*b;
    float div=c/d;
    printf("%f",m-div);


    
    return 0;
}
