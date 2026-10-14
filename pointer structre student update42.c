#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void update(struct Student *s, float m) {
    s->marks = m;
}

int main() {
    struct Student student;
    float newMarks;

    printf("Enter student name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nOld Marks = %.2f\n", student.marks);

    printf("Enter new marks: ");
    scanf("%f", &newMarks);

    update(&student, newMarks);

    printf("Updated Marks = %.2f\n", student.marks);

    return 0;
}
