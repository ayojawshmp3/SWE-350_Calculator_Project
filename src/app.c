// Calculator - Milestone 2
// Joshua-Jeffrey Alvarez
// Mark Reha
// Grand Canyon University
// SWE-350
// 10/13/2024

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "app.h"
#include "hardware.h"

// Addition Function
int add(int *x, int *y) {
    int sum = (*x + *y);
    return sum;
}

// Subtract Function
int subtract(int *x, int *y) {
    int sum = (*x - *y);
    return sum;
}

// Multiplication Function
int multiply(int *x, int *y) {
    int sum = (*x * *y);
    return sum;
}

// Division Function
int divide(int *x, int *y) {
    if (*y == 0) {
        printf("Error: Division by zero\n");
        return 0;  // Handle division by zero
    }
    int sum = (*x / *y);
    return sum;
}

int main() {
    // User numbers (2 inputs for now)
	// Initiates variables
    int num1 = 0, num2 = 0;
    char operator;

    // Create Pointers
    int *pNum1 = &num1;
    int *pNum2 = &num2;

    // Get number 1
    printf("First Num: ");
    scanf("%d", &num1);
    handleSwitchPress();
    handleEnter();

    // Get number 2
    printf("Second Num: ");
    scanf("%d", &num2);
    handleSwitchPress();
    handleEnter();

    // Get arithmetic operation
    printf("Operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover whitespace
    handleButtonPress();
    handleEnter();

    // Execute the arithmetic operation
    int result = 0;
    switch (operator) {
        case '+':
            result = add(pNum1, pNum2);
            break;
        case '-':
            result = subtract(pNum1, pNum2);
            break;
        case '*':
            result = multiply(pNum1, pNum2);
            break;
        case '/':
            result = divide(pNum1, pNum2);
            break;
        default:
            printf("Invalid operator!\n");
            return EXIT_FAILURE;
    }

    // Display the result
    printf("Result: %d\n", result);

    return EXIT_SUCCESS;
}
