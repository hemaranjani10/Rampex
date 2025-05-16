#include <stdio.h>
int main() {
    float marks[5];
    float total = 0.0;
    float average;
    printf("Enter marks for 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    average = total / 5;
    printf("\nHere's how you performed:\n");
    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    return 0;
}
