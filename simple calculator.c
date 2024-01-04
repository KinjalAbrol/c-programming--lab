#include <stdio.h>

// Function declarations
float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        printf("Cannot divide by zero\n");
        return 0;
    }
}

int main() {
    char choice;
    float num1, num2, result;

    printf("Simple Calculator\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");

    printf("Enter choice (1/2/3/4): ");
    scanf(" %c", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case '1': result = add(num1, num2); break;
        case '2': result = subtract(num1, num2); break;
        case '3': result = multiply(num1, num2); break;
        case '4': result = divide(num1, num2); break;
        default: printf("Invalid Input\n"); return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}