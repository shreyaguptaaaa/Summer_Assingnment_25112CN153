#include <stdio.h>

int main() {
    int n, arr[100], i;
    int totalSum = 0, arraySum = 0, missing;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        arraySum += arr[i];
    }

    totalSum = n * (n + 1) / 2;
    missing = totalSum - arraySum;

    printf("Missing number = %d", missing);

    return 0;
}
