#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks[5];
};

void displayStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
}

int main() {
    struct Student students[3]; // Assuming 3 students for simplicity

    // Input details for each student
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        displayStudent(students[i]);
    }

    return 0;
}