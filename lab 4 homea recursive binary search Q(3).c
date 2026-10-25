
#include <stdio.h>

int binarySearch(int a[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (a[mid] == key)
        return mid;

    if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);

    return binarySearch(a, mid + 1, high, key);
}

int main() {
    int a[100], n, key, i, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    index = binarySearch(a, 0, n - 1, key);

    if (index == -1)
        printf("Key not found");
    else
        printf("Found at index %d", index);

    return 0;
}
