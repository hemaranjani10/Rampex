#include <stdio.h>
void deleteElement(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index\n");
        return;
    }
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int indexToDelete = 2;
    deleteElement(arr, &size, indexToDelete);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}