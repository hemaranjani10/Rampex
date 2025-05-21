#include<stdio.h>
int sumOfDigits(int num){
    int sum = 0;
    int temp = num;
    if (temp < 0)
        temp = -temp;
    while (temp != 0) {
        sum += temp % 10;  
        temp /= 10;        
    }
    return sum;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Sum of digits of %d is %d.\n", number, sumOfDigits(number));
    return 0;
}
