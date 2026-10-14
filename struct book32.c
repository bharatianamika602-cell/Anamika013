#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[100];
    int n, i, costly;

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

    costly = 0;

    for (i = 1; i < n; i++) {
        if (books[i].price > books[costly].price) {
            costly = i;
        }
    }

    printf("\nMost Expensive Book:\n");
    printf("Title  : %s\n", books[costly].title);
    printf("Author : %s\n", books[costly].author);
    printf("Price  : %.2f\n", books[costly].price);

    return 0;
}
