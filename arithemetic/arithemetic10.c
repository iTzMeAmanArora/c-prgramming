#include <stdio.h>

int main() {
    int a = 8;
    int b = 1;
    int c = 4;
    int d = 2;
    int e = 1;
    int f = 6;

    int mul = a * b;           
    int sub = c - d;           
    int div = sub / e;         
    int result = mul + div + f;
   
    printf(" %d\n", result);

    return 0;
}
