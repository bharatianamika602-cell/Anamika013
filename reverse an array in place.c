#include <stdio.h>

void reverse(int a[], int n) {
    int i, temp;

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main() {
    int n, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    reverse(a, n);

    printf("Reversed array: ");
    
	 for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
