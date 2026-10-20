#include <stdio.h>

int searchRotated(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
            return mid;

        /* Left half is sorted */
        if (a[low] <= a[mid])
        {
            if (a[low] <= key && key < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        /* Right half is sorted */
        else
        {
            if (a[mid] < key && key <= a[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d rotated sorted elements: ", n);
   int i;
     for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the key: ");
    scanf("%d", &key);

    int index = searchRotated(a, n, key);

    if (index != -1)
        printf("Found at index %d", index);
    else
        printf("Not found");

    return 0;
}

