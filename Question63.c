#include <stdio.h>

int main() {
    int arr[100], n, sum;
    int i, j, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d are:\n", sum);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found.");
    }

    return 0;
}