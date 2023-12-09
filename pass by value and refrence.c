#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two numbers using pass by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using pass by value
    swapByValue(num1, num2);
    printf("After swapping by value: num1 = %d, num2 = %d\n", num1, num2);

    // Resetting the values
    num1 = 10;
    num2 = 20;

    // Swap using pass by reference
    swapByReference(&num1, &num2);
    printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}