#include <stdio.h>

float average(int a[], int n) {
    int sum = 0;
int i;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return (float)sum / n;
}

int aboveAvg(int a[], int n, float avg) {
    int count = 0;
int i;
    for (i = 0; i < n; i++) {
        if (a[i] > avg) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: "); int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    float avg = average(a, n);
    int count = aboveAvg(a, n, avg);

    printf("Average = %.1f\n", avg);
    printf("Above = %d\n", count);

    return 0;
}
