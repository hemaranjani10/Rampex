#include <stdio.h>
double calc(double a, double b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return b != 0 ? a / b : 0; // handle division by zero
    return 0;
}
int main() {
    double a, b;
    char op;
    printf("Enter two numbers and an operator (+ - * /): ");
    scanf("%lf %lf %c", &a, &b, &op);
    if (op == '/' && b == 0) printf("Error: division by zero\n");
    else printf("%.2f %c %.2f = %.2f\n", a, op, b, calc(a, b, op));
    return 0;
}
