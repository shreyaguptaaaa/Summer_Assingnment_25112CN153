#include <stdio.h>

int main() {
    int start, end, num, temp, digit, sum;
    int found = 0;  // Flag variable

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Sorry, there is no Armstrong number in the given range.");
    }

    return 0;
}
