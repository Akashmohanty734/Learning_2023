


#include <stdio.h>

void swapAlternateElements(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Before swapping: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    swapAlternateElements(a, size);

    printf("\nAfter swapping: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
