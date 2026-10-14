#include <stdio.h>

int sum(int a[], int n) {
    int s = 0;
    int i;
    for(i = 0; i < n; i++)
        s += a[i];
    return s;
}

int maxOf(int a[], int n) {
    int max = a[0];
    int i;
    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];
    return max;
}

int main() {
    int a[100], n;

    scanf("%d", &n);
    int i;

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Sum = %d, Max = %d", sum(a,n), maxOf(a,n));

    return 0;
}
