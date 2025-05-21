#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {4, 5, 6, 7};
    int a1 = sizeof(arr1) / sizeof(arr1[0]); 
    int a2 = sizeof(arr2) / sizeof(arr2[0]); 
    int x = a1 + a2; // total size
    int result[x];
    for (int i = 0; i < a1; i++) {
        result[i] = arr1[i];
    }
    for (int i = 0; i < a2; i++) {
        result[a1 + i] = arr2[i];
    }
    for (int i = 0; i < x; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
