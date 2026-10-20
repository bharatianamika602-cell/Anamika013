
#include <stdio.h>
int countEven(int a[], int n) {
    int count = 0;
     int i;
    for ( i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = countEven(a, n);

    printf("Even numbers = %d\n", result);

    return 0;
}

