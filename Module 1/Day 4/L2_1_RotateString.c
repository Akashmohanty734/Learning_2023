

#include <stdio.h>
#include <string.h>

void leftRotateString(char* str) {
    int len = strlen(str);
    int n;
    printf("Enter number of time you want to roate left\n");
    scanf("%d",&n);
    n = n % len;

    // Rotate the string left by n positions
    for (int i = 0; i < n; i++) {
        char temp = str[0];
        for (int j = 0; j < len - 1; j++) {
            str[j] = str[j + 1];
        }
        str[len - 1] = temp;
    }
}

void rightRotateString(char* str) {
    int len = strlen(str);
    int n;
    printf("Enter number of time you want to roate right\n");
    scanf("%d",&n);
    n = n % len;

    // Rotate the string right by n positions
    for (int i = 0; i < n; i++) {
        char temp = str[len - 1];
        for (int j = len - 1; j > 0; j--) {
            str[j] = str[j - 1];
        }
        str[0] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    leftRotateString(str);
    printf("Left rotated string: %s\n", str);

    rightRotateString(str);
    printf("Right rotated string: %s\n", str);

    return 0;
}
