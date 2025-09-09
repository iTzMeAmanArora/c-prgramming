#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    printf("a, b, c, d, e, f :");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    float sub=b-c;
    float m=a*b;
    float div=sub/e;
    float add=m+div;

    printf("%f",add+f);


    return 0;
}
