#include <stdio.h>
int main() {
    int num, originalNum, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num; 
    for ( ; num != 0; num /= 10 ) {
        remainder = num % 10; 
        reversed = reversed * 10 + remainder; 
    }
    if (originalNum == reversed)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);
    
    return 0;
}
