#include <stdio.h>
int main() {
    int temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);
    switch (temperature / 10) {
        case -1:
        case 0:
            printf("Wear a jacket.\n");
            break;
        case 1:
            printf("Wear a sweater.\n");
            break;
        default:
            printf("Wear a T-shirt.\n");
            break;
    }
    return 0;
}
