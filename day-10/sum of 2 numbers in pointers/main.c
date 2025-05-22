#include <stdio.h>
int main() {
    int a, b, sum;
    int *p1 = &a, *p2 = &b;
    scanf("%d %d", p1, p2);
    sum = *p1 + *p2;
    printf("%d\n", sum);
    return 0;
}