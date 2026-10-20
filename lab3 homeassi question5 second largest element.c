#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    int i;
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for ( i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("Second largest = %d", secondLargest);

    return 0;
}

