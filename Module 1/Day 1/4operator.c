#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;

    printf("Enter Number1: ");
    scanf("%f", &operand1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &operand2);

    float result;

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check if the second operand is zero to avoid division by zero error
            if (operand2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit the program with an error code
            }
            result = operand1 / operand2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit the program with an error code
    }

    printf("Result: %.2f\n", result);

    return 0;
}
