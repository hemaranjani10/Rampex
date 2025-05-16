#include <stdio.h>
int main() {
    float basic, hraPercent, daPercent;
    float hra, da, grossSalary;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);
    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);
    hra = (hraPercent / 100) * basic;
    da = (daPercent / 100) * basic;
    grossSalary = basic + hra + da;
    printf("Gross Salary = %.2f\n", grossSalary);
    return 0;
}
