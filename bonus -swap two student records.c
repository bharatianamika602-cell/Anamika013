#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void swapStudents(struct Student *a, struct Student *b) {
    struct Student temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Student s1, s2;

    printf("Enter first student name, roll and marks: ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

    printf("Enter second student name, roll and marks: ");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);

    printf("\nBefore swap:\n");
    printf("Student 1: %s %d %.0f\n", s1.name, s1.roll, s1.marks);
    printf("Student 2: %s %d %.0f\n", s2.name, s2.roll, s2.marks);

    swapStudents(&s1, &s2);

    printf("\nAfter swap:\n");
    printf("Student 1: %s %d %.0f\n", s1.name, s1.roll, s1.marks);
    printf("Student 2: %s %d %.0f\n", s2.name, s2.roll, s2.marks);

    return 0;
}
