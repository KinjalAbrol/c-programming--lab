#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Writing to file
    FILE *file = fopen("student_data.txt", "a");

    if (file == NULL) {
        printf("Error writing to the file.\n");
        return 1;
    }

    struct Student student;

    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    fprintf(file, "%s %d %.2f\n", student.name, student.rollNumber, student.marks);

    fclose(file);

    // Reading from file
    file = fopen("student_data.txt", "r");

    if (file == NULL) {
        printf("Error reading from the file.\n");
        return 1;
    }

    printf("\nStudent Information from File:\n");

    while (fscanf(file, "%s %d %f", student.name, &student.rollNumber, &student.marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", student.name, student.rollNumber, student.marks);
    }

    fclose(file);

    return 0;
}