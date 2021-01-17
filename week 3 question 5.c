#include <stdio.h>

void main(){
    float a, b;

    scanf("%f%f", &a, &b);

    printf("%f + %f = %.2f\n", a, b, a+b);
    printf("%f - %f = %.2f\n", a, b, a-b);
    printf("%f * %f = %.2f\n", a, b, a*b);
    printf("%f / %f = %.2f\n", a, b, a/b);

    return 0;
}
