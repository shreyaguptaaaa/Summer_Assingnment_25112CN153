#include <stdio.h>

int main() {
    int row;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {
        if (i == 1 || i == row) {
            for (int j = 1; j <= row; j++) {
                printf("* ");
            }
        } else {
            for (int j = 1; j <= row; j++) {
                if (j == 1 || j == row) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}