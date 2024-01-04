#include <stdio.h>

// Function to calculate Fibonacci sequence recursively
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

#include <stdio.h>

// Function to calculate Fibonacci sequence recursively
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print Fibonacci sequence up to a given limit
void printFibonacci(int limit) {
    printf("Fibonacci Sequence up to %d terms:\n", limit);
    for (int i = 0; i < limit; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int limit;

    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &limit);

    printFibonacci(limit);

    return 0;
}