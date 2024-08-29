/* Write a program to calculate the grade of a student. There are five 
subjects. Marks in each subject are entered from keyboard. Assign grade 
based on the following rule: 
Total Marks >= 90   Grade: Ex 
90 > Total Marks >= 80  Grade: A 
80 > Total Marks >= 70  Grade: B 
70 > Total Marks >= 60  Grade: C 
60 > Total Marks    Grade: F */
#include <stdio.h>

int main() {
    int marks[5], total = 0;
    char grade;

    printf("Enter marks for five subjects:\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    printf("Total marks: %d\n", total);

    if (total >= 90) {
        grade = 'E';
    } else if (total >= 80) {
        grade = 'A';
    } else if (total >= 70) {
        grade = 'B';
    } else if (total >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

    return 0;
}