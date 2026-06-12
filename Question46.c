#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int original, remainder, digits = 0;
    int result = 0;

    original = num;

    // Count number of digits
    while (original != 0)
    {
        digits++;
        original /= 10;
    }

    original = num;

    // Calculate sum of powers of digits
    while (original != 0)
    {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    return (result == num);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}