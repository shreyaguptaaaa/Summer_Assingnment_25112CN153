#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Shift elements left
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--; // check new element at position j
            }
        }
    }

    printf("Array after removing duplicates: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}