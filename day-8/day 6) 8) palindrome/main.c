#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int temp = num;
    while (temp != 0) {
        int digit = temp % 10;      
        reversed = reversed * 10 + digit;  
        temp /= 10;                       
    }
    return (original == reversed);
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}