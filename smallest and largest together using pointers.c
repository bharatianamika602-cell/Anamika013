#include <stdio.h>

void minMax(int a[], int n, int *mn, int *mx) {
    *mn = a[0];
    *mx = a[0];
   int i;
    for (i = 1; i < n; i++) {
        if (a[i] < *mn) {
            *mn = a[i];
        }

        if (a[i] > *mx) {
            *mx = a[i];
        }
    }
}

int main() {
    int n, a[100];
    int mn, mx;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    int i;
      for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    minMax(a, n, &mn, &mx);

    printf("Min = %d\n", mn);
    printf("Max = %d\n", mx);

    return 0;
}
