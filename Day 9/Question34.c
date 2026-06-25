#include <stdio.h>

int main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (int i = row; i >=1; i--) 
    {
        row = row - 1 ;
        for (int j = 1; j <=i; j++) {
            printf("%d", j);
        }
        
        printf("\n");
        
    }
    return 0;
}
