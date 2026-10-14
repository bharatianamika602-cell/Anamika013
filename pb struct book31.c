#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", books[i].title);

        printf("Author: ");
        scanf(" %[^\n]", books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\n----- Book List -----\n");

    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title  : %s\n", books[i].title);
        printf("Author : %s\n", books[i].author);
        printf("Price  : %.2f\n", books[i].price);
    }

    return 0;
}
