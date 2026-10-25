
#include <stdio.h>

void merge(int a[], int l, int m, int r) {
    int temp[100], i = l, j = m + 1, k = 0;

    while (i <= m && j <= r) {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= m)
        temp[k++] = a[i++];

    while (j <= r)
        temp[k++] = a[j++];

    for (i = l, k = 0; i <= r; i++)
        a[i] = temp[k++];
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int a[100], n, i, count, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergeSort(a, 0, n - 1);

    for (i = 0; i < n; i++) {
        count = 1;

        while (i + 1 < n && a[i] == a[i + 1]) {
            count++;
            i++;
        }

        if (count > n / 2) {
            printf("Majority = %d\n", a[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No majority\n");

    return 0;
}
