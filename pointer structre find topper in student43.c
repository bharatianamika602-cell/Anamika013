 #include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[100];
    struct Student *p;
    int n, i;
    struct Student *topper;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Roll: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    p = students;
    topper = students;

    for (i = 1; i < n; i++) {
        if ((p + i)->marks > topper->marks) {
            topper = p + i;
        }
    }

    printf("\n----- Topper -----\n");
    printf("Name  : %s\n", topper->name);
    printf("Roll  : %d\n", topper->roll);
    printf("Marks : %.2f\n", topper->marks);

    return 0;
}
