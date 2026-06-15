#include <stdio.h>

int main()
{
    int arr[100], n, i, j = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements forward
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with zero
    while(j < n)
    {
        arr[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
