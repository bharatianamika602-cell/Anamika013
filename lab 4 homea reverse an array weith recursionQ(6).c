
#include <stdio.h>

void reverse(int a[], int left, int right) {
    int temp;

    if (left >= right)
        return;

    temp = a[left];
    a[left] = a[right];
    a[right] = temp;

    reverse(a, left + 1, right - 1);
}

int main() {
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    reverse(a, 0, n - 1);

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
