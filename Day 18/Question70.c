#include <stdio.h>

int main() {
    int a[100], n, i, j, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++) {
        minIndex = i;

        for(j = i + 1; j < n; j++) {
            if(a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
