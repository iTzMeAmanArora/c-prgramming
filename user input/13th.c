#include <stdio.h>

int main() {
    float a, b, c, d, e, f, g;
    printf("Enter a, b, c, d, e, f, g : ");
    scanf("%f %f %f %f %f %f %f", &a, &b, &c, &d, &e, &f, &g);

    printf("%f\n", a * b - (c - d) + e - f + g);
    return 0;
}
