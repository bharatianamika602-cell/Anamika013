
#include <stdio.h>

long long merge(int a[], int l, int m, int r) {
    int temp[100], i = l, j = m + 1, k = 0;
    long long inv = 0;

    while (i <= m && j <= r) {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else {
            temp[k++] = a[j++];
            inv += m - i + 1;
        }
    }

    while (i <= m)
        temp[k++] = a[i++];

    while (j <= r)
        temp[k++] = a[j++];

    for (i = l, k = 0; i <= r; i++)
        a[i] = temp[k++];

    return inv;
}

long long mergeSort(int a[], int l, int r) {
    long long inv = 0;

    if (l < r) {
        int m = (l + r) / 2;
        inv += mergeSort(a, l, m);
        inv += mergeSort(a, m + 1, r);
        inv += merge(a, l, m, r);
    }

    return inv;
}

int main() {
    int a[100], n, i;
    long long inv;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    inv = mergeSort(a, 0, n - 1);

    printf("Inversions = %lld\n", inv);

    return 0;
}
