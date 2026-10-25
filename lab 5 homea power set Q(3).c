
#include <stdio.h>

int a[20], n, count = 0;

void powerSet(int i, int subset[], int size) {
    if (i == n) {
        printf("{ ");
            int j;
	    for (j = 0; j < size; j++)
            printf("%d ", subset[j]);
        printf("}\n");
        count++;
        return;
    }

    powerSet(i + 1, subset, size);

    subset[size] = a[i];
    powerSet(i + 1, subset, size + 1);
}

int main() {
    int subset[20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
        int i;
	for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);

    powerSet(0, subset, 0);

    printf("Count = %d\n", count);

    return 0;
}
