#include <stdio.h>

int main()
{
    int m, n, key;
    int found = 0;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter the elements of the matrix:\n");
   int i;
    for (i = 0; i < m; i++)
    {
    	   int j;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the key: ");
    scanf("%d", &key);
    
    for (i = 0; i < m; i++)
    {
    	  int j;
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == key)
            {
                printf("Found at (%d, %d)", i, j);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        printf("Not found");

    return 0;
}

