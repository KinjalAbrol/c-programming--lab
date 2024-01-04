#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr_malloc, *arr_calloc, *arr_realloc;
    int size;

    // Demonstrate malloc()
    printf("Enter the size of the array for malloc(): ");
    scanf("%d", &size);

    arr_malloc = (int*)malloc(size * sizeof(int));

    if (arr_malloc == NULL) {
        printf("Memory allocation failed for malloc()\n");
        return 1;
    }

    printf("Memory allocated successfully using malloc()\n");

    // Demonstrate calloc()
    printf("\nEnter the size of the array for calloc(): ");
    scanf("%d", &size);

    arr_calloc = (int*)calloc(size, sizeof(int));

    if (arr_calloc == NULL) {
        printf("Memory allocation failed for calloc()\n");
        free(arr_malloc); // Free memory allocated by malloc() before exiting
        return 1;
    }

    printf("Memory allocated successfully using calloc()\n");

    // Demonstrate realloc()
    printf("\nEnter the new size for realloc(): ");
    scanf("%d", &size);

    arr_realloc = (int*)realloc(arr_malloc, size * sizeof(int));

    if (arr_realloc == NULL) {
        printf("Memory reallocation failed for realloc()\n");
        free(arr_malloc); // Free memory allocated by malloc() before exiting
        free(arr_calloc); // Free memory allocated by calloc() before exiting
        return 1;
    }

    printf("Memory reallocated successfully using realloc()\n");

    // Free allocated memory
    free(arr_calloc);
    free(arr_realloc);

    return 0;
}