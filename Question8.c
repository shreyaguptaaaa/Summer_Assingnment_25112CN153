#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num = num / 10;
    }

    if (originalNum == reversedNum)
        printf("%d is a Palindrome Number.\n", originalNum);
    else
        printf("%d is Not a Palindrome Number.\n", originalNum);

    return 0;
}