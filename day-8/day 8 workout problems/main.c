#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}


double computePower(double base, int exponent) {
    return pow(base, exponent);
}


double calc(double a, double b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return (b != 0) ? a / b : 0;
    return 0;
}


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

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    printf("Choose an operation:\n");
    printf("1. Reverse a number\n");
    printf("2. Compute power (x^y)\n");
    printf("3. Basic arithmetic (+, -, *, /)\n");
    printf("4. Check if a number is a palindrome\n");
    printf("5. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        printf("Reversed: %d\n", reverseNumber(number));
    } else if (choice == 2) {
        double base;
        int exponent;
        printf("Enter base (x): ");
        scanf("%lf", &base);
        printf("Enter exponent (y): ");
        scanf("%d", &exponent);
        printf("%.2f ^ %d = %.2f\n", base, exponent, computePower(base, exponent));
    } else if (choice == 3) {
        double a, b;
        char op;
        printf("Enter two numbers and an operator (+ - * /): ");
        scanf("%lf %lf %c", &a, &b, &op);
        if (op == '/' && b == 0) 
            printf("Error: Division by zero\n");
        else 
            printf("%.2f %c %.2f = %.2f\n", a, op, b, calc(a, b, op));
    } else if (choice == 4) {
        int number;
        printf("Enter an integer: ");
        scanf("%d", &number);
        if (isPalindrome(number))
            printf("%d is a palindrome.\n", number);
        else
            printf("%d is not a palindrome.\n", number);
    } else if (choice == 5) {
        double fahrenheit;
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        printf("%.2f Fahrenheit is %.2f Celsius.\n", fahrenheit, fahrenheitToCelsius(fahrenheit));
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}
