#include <stdio.h>
#include <string.h>

void bubbleSort(char *arr[], int size) {
    int i, j;
    char *temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int numNames = sizeof(names) / sizeof(names[0]);
    int i;

    printf("Original names:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    bubbleSort(names, numNames);

    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
