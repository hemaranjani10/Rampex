#include <stdio.h>
int main() {
    float marks[5];
    int pass = 1; // Assume pass unless a subject is failed
    printf("Enter marks for 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        if (marks[i] < 35) {
            pass = 0; // Fail if any subject is less than 35
        }
    }
    if (pass) {
        printf("You passed!\n");
    } else {
        printf("You failed.\n");
    }
    return 0;
}
