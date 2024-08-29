/* Write a program to read the name of a student (studentName), roll Number (rollNo) and marks (totalMarks) obtained. rollNo may be an 
alphanumeric string. Display the data as read. Hint: Create a Student structure and write appropriate functions. */
#include <stdio.h>
#include <string.h>

struct Student {
    char studentName[50];
    char rollNo[10];
    int totalMarks;
};

void readStudentData(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->studentName);

    printf("Enter roll number: ");
    scanf("%s", student->rollNo);

    printf("Enter total marks: ");
    scanf("%d", &student->totalMarks);
}

void displayStudentData(struct Student *student) {
    printf("\nStudent Data:\n");
    printf("Name: %s\n", student->studentName);
    printf("Roll Number: %s\n", student->rollNo);
    printf("Total Marks: %d\n", student->totalMarks);
}

int main() {
    struct Student student;

    readStudentData(&student);
    displayStudentData(&student);

    return 0;
}