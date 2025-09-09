#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    printf("Enter a, b, c, d, e, f ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    float sub=b-c;
    float div=sub/d;
    float m=a*div;
    float add=m+e;
    printf("%f", add-f);
    


    return 0;
}
