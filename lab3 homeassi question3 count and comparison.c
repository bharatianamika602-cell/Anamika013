#include <stdio.h>

int linearComparisons(int a[], int n, int key)
{
    int count = 0;
     int i;
    for (i = 0; i < n; i++)
    {
        count++;

        if (a[i] == key)
            break;
    }

    return count;
}

int binaryComparisons(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    int count = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        count++;

        if (a[mid] == key)
            break;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return count;
}

int main()
{
    int n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d sorted elements: ", n);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the key: ");
    scanf("%d", &key);

    printf("Linear = %d comparisons\n",
           linearComparisons(a, n, key));

    printf("Binary = %d comparisons",
           binaryComparisons(a, n, key));

    return 0;
}

