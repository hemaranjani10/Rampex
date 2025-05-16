#include <stdio.h>

int main() {
    int ch;
    float r, l, w, s, area;

    do {
        printf("\n1. Circle\n2. Rectangle\n3. Square\n4. Exit\nChoice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                printf("Radius: "); scanf("%f", &r);
                printf("Area: %.2f\n", 3.14f * r * r);
                break;
            case 2:
                printf("Length: "); scanf("%f", &l);
                printf("Width: "); scanf("%f", &w);
                printf("Area: %.2f\n", l * w);
                break;
            case 3:
                printf("Side: "); scanf("%f", &s);
                printf("Area: %.2f\n", s * s);
                break;
            case 4:
                printf("Bye!\n");
                break;
            default:
                printf("Invalid!\n");
        }
    } while(ch != 4);
    return 0;
}
