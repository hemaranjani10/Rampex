#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2;
    int result = a + b * c - (a / b);
    printf("Result of the expression: %d\n", result);
    return 0;
}