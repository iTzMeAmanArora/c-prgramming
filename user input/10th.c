#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    printf("Enter a, b, c, d, e, f : ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    float m=a*b;
    float div=c/d;
    float sub1=m*div;
    float sub2=sub1-e;
    printf("%f",sub2+f);
    

    return 0;
}
