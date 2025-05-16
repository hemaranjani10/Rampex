#include <stdio.h>
int main() {
    float marks[5];
    float total = 0.0;
    float average;
    char grade;
    printf("Enter marks for 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    average = total / 5;
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';
    printf("\nTotal marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);
    return 0;
}