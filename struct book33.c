#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[100];
    int n, i;
    float sum = 0, average;

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

        sum = sum + books[i].price;
    }

    average = sum / n;

    printf("\nAverage Price = %.2f\n", average);

    return 0;
}
