#include <stdio.h>

int main() {
    float a, b, c, d, e, f ;
    printf("Enter a, b, c, d, e,f: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    float sub=c-d;
    float m=b*sub;
    float div=m/e;
    float add=a+div;
    printf("%f",add + f);

    return 0;
}
