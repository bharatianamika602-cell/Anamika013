
#include <stdio.h>

int comparisons = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int low, int high) {
    int mid = low + (high - low) / 2;
    int x = a[low], y = a[mid], z = a[high];

    // Find median of first, middle and last
    if ((x <= y && y <= z) || (z <= y && y <= x))
        swap(&a[mid], &a[high]);
    else if ((y <= x && x <= z) || (z <= x && x <= y))
        swap(&a[low], &a[high]);

    int pivot = a[high];
    int i = low - 1;
         int j;

    for ( j = low; j < high; j++) {
        comparisons++;

        if (a[j] <= pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int a[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
        int i;
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quickSort(a, 0, n - 1);

    printf("Sorted: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nComparisons: %d", comparisons);

    return 0;
}
