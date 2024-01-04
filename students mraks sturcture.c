#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming 5 subjects
};

int main() {
    struct Student student;

    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    float totalMarks = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        totalMarks += student.marks[i];
    }

    printf("Total Marks for %s (Roll Number: %d): %.2f\n", student.name, student.rollNumber, totalMarks);

    return 0;
}