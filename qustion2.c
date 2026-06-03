#include <stdio.h>

int main()
{
    int start, end, i, j, count;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers are:\n");

    for(i = start; i <= end; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}