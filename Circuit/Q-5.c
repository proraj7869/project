#include <stdio.h>

int main() 
{
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++) 
    {
        for (j = i; j < rows; j++) 
        {
            printf(" ");
        }
        
        for (k = i; k >= 1; k--) 
        {
            printf("%d ", k);
        }

        for (k = 2; k <= i; k++) 
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}