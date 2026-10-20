#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void addGrace(struct Student a[], int n, float g) {
	int i;
for (i = 0; i < n; i++) {
        a[i].marks += g;
    }
}

int countPass(struct Student a[], int n, float cut) {
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (a[i].marks >= cut) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    struct Student a[100];

    printf("Enter number of students: ");
    scanf("%d", &n);
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter name, roll and marks: ");
        scanf("%s %d %f", a[i].name, &a[i].roll, &a[i].marks);
    }

    addGrace(a, n, 5);

    printf("\nAfter grace:\n");

    for (i = 0; i < n; i++) {
        printf("%s: %.0f\n", a[i].name, a[i].marks);
    }

    int passed = countPass(a, n, 40);

    printf("Passed = %d\n", passed);

    return 0;
}
