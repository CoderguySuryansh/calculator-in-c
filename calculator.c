#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user for the operator (+, -, *, /)
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Prompt user for two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the corresponding operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Return a non-zero value to indicate an error
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Return a non-zero value to indicate an error
    }

    // Display the result
    printf("Result: %.2f\n", result);

    return 0; // Return 0 to indicate successful execution
}
