#include <stdio.h>

int main() {
    float a, b, c, d, e;
    printf("Enter a,b,c,d,e: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    float m=a*b;
    float divide=c/d;
    float add=m+divide;
    
    printf("%f",add-e);



    return 0;
}
