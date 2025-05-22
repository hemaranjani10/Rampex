#include <stdio.h>

int reverseHelper(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseHelper(n / 10, rev * 10 + n % 10);
}

int reverse(int n) {
    return reverseHelper(n, 0);
}

int main() {
    int num = 1234;
    printf("Original: %d\n", num);
    printf("Reversed: %d\n", reverse(num));
    return 0;
}
