#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Writing to a file
    file = fopen("sample.txt", "w");

    if (file == NULL) {
        printf("Error writing to the file.\n");
        return 1;
    }

    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);

    fclose(file);

    // Reading from the file
    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Error reading from the file.\n");
        return 1;
    }

    printf("\nContents of the file:\n");

    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    fclose(file);

    return 0;
}