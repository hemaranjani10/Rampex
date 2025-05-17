#include <stdio.h>
int main(int n) {
    if (n < 0) n = -n; 
    int sum = 0;
    while (n > 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}
