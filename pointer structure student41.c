#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *p;

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    p = &s;

    printf("\nStudent Details:\n");
    printf("Name  : %s\n", p->name);
    printf("Roll  : %d\n", p->roll);
    printf("Marks : %.2f\n", p->marks);

    return 0;
}
