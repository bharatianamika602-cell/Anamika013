#include <stdio.h>

int findFloor(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    int floor = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] <= key)
        {
            floor = a[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return floor;
}

int main()
{
    int n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d sorted elements: ", n);
    int i;
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the key: ");
    scanf("%d", &key);

    printf("Floor = %d", findFloor(a, n, key));

    return 0;
}

