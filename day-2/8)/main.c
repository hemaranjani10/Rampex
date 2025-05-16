#include <stdio.h>
int main() {
    float basic, hraPercent, daPercent;
    float hra, da, grossSalary;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);

    // Input DA percentage
    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);

    // Calculate HRA and DA amounts
    hra = (hraPercent / 100) * basic;
    da = (daPercent / 100) * basic;

    // Calculate gross salary
    grossSalary = basic + hra + da;

    // Output the result
    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}
