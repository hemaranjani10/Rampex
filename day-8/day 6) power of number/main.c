#include <stdio.h>
#include <math.h>
int main() {
    double base, result;
    int exponent;
    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (y): ");
    scanf("%d", &exponent);
    result = pow(base, exponent);
    printf("%.2f ^ %d = %.2f\n", base, exponent, result);
    return 0;
}